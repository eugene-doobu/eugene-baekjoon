#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;

int main() {
    fastio; long long n, k=1, s = 0; cin >> n;
    while (n>0)
    {
        if (n < k) k = 1;
        s++; n -= k; k++;
    }
    cout << s;
}