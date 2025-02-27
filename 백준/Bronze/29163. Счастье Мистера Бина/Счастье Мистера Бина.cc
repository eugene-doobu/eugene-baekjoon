#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    int n; cin >> n; vector<int> ns(n);
    int evenCount = 0;
    for (int i = 0; i < n; ++i) {
        cin >> ns[i];
        if (ns[i] % 2 == 0)
            evenCount++;
    }
    if (evenCount > n / 2) cout << "Happy";
    else cout << "Sad";
}