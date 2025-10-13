#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    int n, f, base, i;
    cin >> n >> f;
    base = n - (n % 100);
    for (i = 0; i < 100; i++) {
        if ((base + i) % f == 0) {
            if (i < 10)
                cout << "0";
            cout << i << "\n";
            break;
        }
    }
}