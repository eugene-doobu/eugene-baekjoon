#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int n, u, l; cin >> n >> u >> l;
    if (n >= 1000 && (u >= 8000 || l >= 260))
        cout << "Very Good";
    else if (n >= 1000)
        cout << "Good";
    else
        cout << "Bad";
}
