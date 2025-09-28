#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    fastio;
    int n, num, i, j; bool seen[50], ok;
    while (cin >> n && n != 0) {
        memset(seen, 0, sizeof(seen));
        for (i = 0; i < n; i++) {
            for (j = 0; j < 6; j++) {
                cin >> num;
                seen[num] = true;
            }
        }
        ok = true;
        for (i = 1; i <= 49; i++) {
            if (!seen[i]) {
                ok = false;
                break;
            }
        }
        if (ok) cout << "Yes\n";
        else cout << "No\n";
    }
}