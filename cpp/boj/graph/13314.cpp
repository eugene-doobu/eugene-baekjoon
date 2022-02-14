#include <bits/stdc++.h>
#include <regex>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    cout << "100\n";
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            if(i == j || j==99 || i==99) cout << 0 << " ";
            else cout << 1 << " ";
        }
        cout << "\n";
    }
}