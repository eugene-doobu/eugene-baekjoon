#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    fastio;
    vector<int> x(10);
    int ans, i, j, k;
    for (i = 0; i < 10; i++)
        cin >> x[i];
    ans = 0;
    for (i = 0; i < 10; i++)
        for (j = i + 1; j < 10; j++)
            ans ^= (x[i] | x[j]);
    for (i = 0; i < 10; i++)
        for (j = i + 1; j < 10; j++)
            for (k = j + 1; k < 10; k++)
                ans ^= (x[i] | x[j] | x[k]);
    cout << ans << "\n";
}