#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n, m; cin >> n >> m;
    if (n >= 3 && m <= 4) cout << "TroyMartian\n";
    if (n <= 6 && m >= 2) cout << "VladSaturnian\n";
    if (n <= 2 && m <= 3) cout << "GraemeMercurian\n";
}