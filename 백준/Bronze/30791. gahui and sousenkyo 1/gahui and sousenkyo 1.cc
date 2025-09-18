#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    int v16, v17, v18, v19, v20, cnt;
    cnt = 0;
    cin >> v16 >> v17 >> v18 >> v19 >> v20;
    if (v16 - v17 <= 1000)
        cnt++;
    if (v16 - v18 <= 1000)
        cnt++;
    if (v16 - v19 <= 1000)
        cnt++;
    if (v16 - v20 <= 1000)
        cnt++;
    cout << cnt << "\n";
}