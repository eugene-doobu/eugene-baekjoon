#include <bits/stdc++.h>
using namespace std;
int main() {
    int x1, x2 ,y1 ,y2;
    int a1, a2, b1, b2;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;
    int ans1 = max(a2, x2) - min(a1,x1);
    int ans2 = max(b2, y2) - min(b1, y1);
    int ans = max(ans1, ans2);
    cout << ans * ans;
}