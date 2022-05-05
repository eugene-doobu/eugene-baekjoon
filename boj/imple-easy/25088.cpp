#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;
using pii = pair<int, int>;

void printC(int n) {
    while (n--) { cout << "+-"; }
    cout << "+\n";
}

void PrintW(int n) {
    while (n--) { cout << "|."; }
    cout << "|\n";
}

int main() {
    fastio;
    int n; cin >> n;
    for (int j =1; j <= n; ++j) {
        cout << "Case #" << j << ":\n";
        int r, c; cin >> r >> c;
        cout << ".."; printC(c-1);
        cout << ".."; PrintW(c-1);
        for (int i = 1; i < r; ++i) {
            printC(c);
            PrintW(c);
        }
        printC(c);
    }
}
