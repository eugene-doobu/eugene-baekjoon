#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
using ll = long long;

pair<ll, ll> getCheese(ll pre, ll bot, ll top) {
    ll newTop = bot;
    ll newBot = top + pre * bot;
    return { newBot, newTop };
}

int main() {
    fastio; int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    ll top = 1;
    ll bot = v[n - 1];
    for (int i = n - 1; i > 0; --i) {
        auto value = getCheese(v[i - 1], bot, top);
        bot = value.first;
        top = value.second;
    }
    cout << (bot - top) << ' ' << bot;
}
