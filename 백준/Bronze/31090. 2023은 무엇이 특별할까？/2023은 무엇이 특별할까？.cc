#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    int t, n; cin >> t;
    while (t--) {
        cin >> n;
        if ((n + 1) % (n % 100) == 0)
            cout << "Good\n";
        else
            cout << "Bye\n";
    }
}