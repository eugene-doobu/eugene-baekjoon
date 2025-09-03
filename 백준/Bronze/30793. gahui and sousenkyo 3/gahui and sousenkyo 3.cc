#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    double a, b; cin >> a >> b; double ratio = a / b;
    if (ratio < 0.2) cout << "weak";
    else if (ratio < 0.4) cout << "normal";
    else if (ratio < 0.6) cout << "strong";
    else cout << "very strong";
}