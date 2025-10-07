#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    int y, m, d, i, iday;
    char dash;
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> y >> dash >> m >> dash >> d;
    iday = 0;
    for (i = 1; i < m; i++)
        iday += days[i];
    iday += d;
    if (294 - iday >= 35)
        cout << "GOOD\n";
    else
        cout << "TOO LATE\n";
}