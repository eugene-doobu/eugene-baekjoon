#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    fastio;
    int n, i;
    while (true) {
        cin >> n;
        if (n == 0) break;
        vector<int> v(n);
        for (i = 0; i < n; i++)
            cin >> v[i];
        for (i = n - 1; i >= 0; i--)
            cout << v[i] << "\n";
        cout << "0\n";
    }
}