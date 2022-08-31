struct BigFloat;
bool cmp(const BigFloat &, const BigFloat &, bool = false);
BigFloat add(const BigFloat &, const BigFloat &);
BigFloat subtract(const BigFloat &, const BigFloat &, bool = true);

struct BigFloat {
    bool neg;
    vector<char> dec;
    BigFloat (): neg(false) {}
    BigFloat (char *a) {
        int n = strlen(a);
        for (int i = n - 1; i > 0; i--) dec.push_back(a[i] - '0');
        neg = false;
        if (n > 0) {
            if (a[0] == '-') neg = true;
            else dec.push_back(a[0] - '0');
        }
    }
    BigFloat (const BigFloat &x) {
        dec = x.dec;
        neg = x.neg;
    }
    BigFloat (const int &x) {
        neg = false;
        int n = x;
        for (int i = 0; i < 50; i++) dec.push_back(0);
        while (n) {
            dec.push_back(n % 10);
            n /= 10;
        }
    }
    BigFloat operator -() const {
        BigFloat ret(*this);
        ret.neg = !ret.neg;
        return ret;
    }
    BigFloat operator +(const BigFloat &x) const {
        if (neg == x.neg) return add(*this, x);
        return subtract(*this, x);
    }
    BigFloat operator -(const BigFloat &x) const {
        if (neg == x.neg) return subtract(*this, x);
        return add(*this, x);
    }
    bool operator <(const BigFloat &x) const {
        return cmp(*this, x);
    }
    BigFloat toNumber() const {
        BigFloat ret(*this);
        for (int i = 0; i < min(50, (int)this->dec.size()); i++) ret.dec[i] = 0;
        while (!ret.dec.empty() && !ret.dec.back()) ret.dec.pop_back();
        return ret;
    }
    BigFloat operator *(const BigFloat &x) const {
        BigFloat ret;
        ret.neg = neg ^ x.neg;
        vector<int> res((int)dec.size() + (int)x.dec.size() + 1);
        for (int i = 0; i < (int)dec.size(); i++) for (int j = 0; j < (int)x.dec.size(); j++) res[i + j] += dec[i] * x.dec[j];
        for (int i = 0; i < (int)res.size() - 1; i++) res[i + 1] += res[i] / 10, res[i] %= 10;
        vector<char> tmp;
        for (auto &i: res) tmp.push_back(i);
        ret.dec.clear();
        for (int i = 50; i < (int)tmp.size(); i++) ret.dec.push_back(tmp[i]);
        while (!ret.dec.empty() && !ret.dec.back()) ret.dec.pop_back();
        return ret;
    }
    BigFloat operator /(const BigFloat &x) const {
        BigFloat div(x), ret, th(*this);
        ret.neg = neg ^ x.neg;
        div.neg = th.neg = false;
        ret.dec.resize((int)this->dec.size() + 1);
        reverse(div.dec.begin(), div.dec.end());
        for (int i = 0; i < (int)this->dec.size(); i++) div.dec.push_back(0);
        reverse(div.dec.begin(), div.dec.end());
        int k = (int)this->dec.size() + 50;
        while (k && !div.dec.empty()) {
            while (div < th) {
                th = th - div;
                ret.dec[k]++;
            }
            reverse(div.dec.begin(), div.dec.end());
            div.dec.pop_back();
            reverse(div.dec.begin(), div.dec.end());
            k--;
        }
        while (!ret.dec.empty() && !ret.dec.back()) ret.dec.pop_back();
        return ret;
    }
    BigFloat operator /(const int &x) const {
        BigFloat div(x);
        return operator /(div);
    }
    BigFloat operator =(const BigFloat &x) {
        neg = x.neg;
        dec = x.dec;
        return *this;
    }
    void print() const {
        if (neg) printf("-");
        vector<char> tmp = this->dec, res;
        reverse(tmp.begin(), tmp.end());
        for (int i = 0; i < (int)tmp.size() - 50; i++) res.push_back(tmp[i]);
        for (int i = (int)tmp.size() - 50; i < (int)tmp.size() - 44; i++) {
            if (i < 0) res.push_back(0);
            else res.push_back(tmp[i]);
        }
        if ((int)tmp.size() >= 44 && tmp[(int)tmp.size() - 44] >= 5) res.back()++;
        reverse(res.begin(), res.end());
        for (int i = 0; i < (int)res.size() - 1; i++) if (res[i] >= 10) {
            res[i] -= 10;
            res[i + 1]++;
        }
        if (res.back() >= 10) {
            res.back() -= 10;
            res.push_back(1);
        }
        reverse(res.begin(), res.end());
        for (int i = 0; i < (int)res.size() - 6; i++) printf("%d", res[i]);
        if ((int)res.size() <= 6) printf("0");
        printf(".");
        for (int i = (int)res.size() - 6; i < (int)res.size(); i++) printf("%d", res[i]);
    }
};

bool cmp(const BigFloat &a, const BigFloat &b, bool assume) {
    if (!assume && a.neg != b.neg) return a.neg > b.neg;
    if (!assume && a.neg && b.neg) return cmp(b, a, true);
    if ((int)a.dec.size() != (int)b.dec.size()) return a.dec.size() < b.dec.size();
    for (int i = (int)a.dec.size() - 1; i >= 0; i--) if (a.dec[i] != b.dec[i]) return a.dec[i] < b.dec[i];
    return false;
}

BigFloat add(const BigFloat &a, const BigFloat &b) {
    BigFloat ret;
    ret.dec.resize(max((int)a.dec.size(), (int)b.dec.size()));
    for (int i = 0; i < (int)a.dec.size(); i++) ret.dec[i] += a.dec[i];
    for (int i = 0; i < (int)b.dec.size(); i++) ret.dec[i] += b.dec[i];
    for (int i = 0; i < (int)ret.dec.size() - 1; i++) ret.dec[i + 1] += ret.dec[i] / 10, ret.dec[i] %= 10;
    if (ret.dec.back() >= 10) ret.dec.push_back(ret.dec.back() / 10), ret.dec[(int)ret.dec.size() - 2] %= 10;
    ret.neg = a.neg;
    return ret;
}

BigFloat subtract(const BigFloat &a, const BigFloat &b, bool fir) {
    if (cmp(a, b, true)) return -subtract(b, a, false);
    BigFloat ret(a);
    for (int i = 0; i < (int)b.dec.size(); i++) ret.dec[i] -= b.dec[i];
    for (int i = 0; i < (int)a.dec.size(); i++) while (ret.dec[i] < 0) {
        ret.dec[i] += 10;
        ret.dec[i + 1]--;
    }
    while (!ret.dec.empty() && !ret.dec.back()) ret.dec.pop_back();
    if (fir) ret.neg = a.neg;
    else ret.neg = b.neg;
    return ret;
}

BigFloat PI("314159265358979323842264338327950288419716939937510");
BigFloat PI2("628318530717958647684528676655900576839433879875020");

BigFloat sin_exact(BigFloat x) {
    x = x - PI2 * (x / PI2).toNumber();
    BigFloat res("-100000000000000000000000000000000000000000000000000"), next(x), curr(x);
    for (int i = 1; i < 200; i += 2) {
        res = next;
        curr = curr * x;
        curr = curr * x;
        curr = curr / (i + 1);
        curr = curr / (i + 2);
        curr.neg ^= true;
        next = next + curr;
    }
    return res;
}