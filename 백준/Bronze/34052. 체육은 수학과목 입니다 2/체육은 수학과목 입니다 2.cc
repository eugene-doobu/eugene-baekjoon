#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    int t1, t2, t3, t4, sum;
    cin >> t1 >> t2 >> t3 >> t4;
    sum = t1 + t2 + t3 + t4 + 300;
    if (sum <= 1800)
        cout << "Yes\n";
    else
        cout << "No\n";
}