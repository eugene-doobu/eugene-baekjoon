#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    long long n;
    int l, len, i, a;
    cin >> n >> l;
    for (len = l; len <= 100; len++) {
        long long temp = n - (long long)len * (len - 1) / 2;
        if (temp >= 0 && temp % len == 0) {
            a = temp / len;
            for (i = 0; i < len; i++)
                cout << a + i << " ";
            cout << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
}