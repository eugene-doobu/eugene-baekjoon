#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;

int main() {
    fastio;
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (a + c > b + d) cout << "Yongdap";
    else if (a + c < b + d) cout << "Hanyang Univ.";
    else cout << "Either";
}