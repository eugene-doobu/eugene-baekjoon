#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int c(int n) {
    while (n > 0) {
        if (n % 10 == 7) return 1;
        n /= 10;
    }
    return 0;
}

int d(int n) {
    return n % 7 == 0;
}

int main() {
    int n; cin >> n;
    cout << 2 * c(n) + d(n);
}