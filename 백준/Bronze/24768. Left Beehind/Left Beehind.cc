#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio; int x, y;
    while (true) {
        cin >> x >> y;
        if (x == 0 && y == 0) break;
        if (x + y == 13) cout << "Never speak again.\n";
        else if (y > x) cout << "Left beehind.\n";
        else if (x > y) cout << "To the convention.\n";
        else cout << "Undecided.\n";
    }
}