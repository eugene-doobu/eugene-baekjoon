#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <string>
using namespace std;
int main() {
    fastio;
    string s; int l, i, bf; bool ok;
    cin >> s >> l;
    ok = true;
    for (i = 2; i < l; i++) {
        int rem = 0;
        for (char c : s)
            rem = (rem * 10 + (c - '0')) % i;
        if (rem == 0) {
            ok = false;
            bf = i;
            break;
        }
    }
    if (ok) cout << "GOOD\n";
    else cout << "BAD " << bf << "\n";
}