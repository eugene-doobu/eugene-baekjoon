#include<bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(void) {
    fastio;
    int n; cin >> n;
    for (int i = 0; i < n * 5; ++i) {
        if (i < n) for (int j = 0; j < n * 5; ++j) cout << "@";
        if (i >= ((5*n)-n)) for (int j = 0; j < n * 5; ++j) cout << "@";
        if (i >= n && i < ((5*n)-n)) for (int j = 0; j < n; ++j) cout << "@";
        cout << "\n";
    }
}
