#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    double sp, we, st;
    bool ok;
    while (cin >> sp >> we >> st && (sp != 0 || we != 0 || st != 0)) {
        ok = false;
        if (sp <= 4.5 && we >= 150 && st >= 200) {
            cout << "Wide Receiver ";
            ok = true;
        }
        if (sp <= 6.0 && we >= 300 && st >= 500) {
            cout << "Lineman ";
            ok = true;
        }
        if (sp <= 5.0 && we >= 200 && st >= 300) {
            cout << "Quarterback ";
            ok = true;
        }
        if (!ok) cout << "No positions";
        cout << "\n";
    }
}