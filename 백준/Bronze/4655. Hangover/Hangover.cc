#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    double c, sum; int n;
    while (cin >> c && c != 0.0) {
        sum = 0.0;
        n = 0;
        while (sum < c) {
            n++;
            sum += 1.0 / (n + 1.0);
        }
        cout << n << " card(s)\n";
    }
}