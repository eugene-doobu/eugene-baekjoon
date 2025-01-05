#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int n, v = 4, prev; cin >> n;
    while (v <= 777777)
    {
        if (v > n) break;
        prev = v;
        int p = 1;
        while (p < v)
        {
            int f = (v / p) % 10;
            if (f == 4) break;
            p *= 10;
        }
        if (p > v)
        {
            v = 4;
            p /= 10;
	        while (p > 0){v *= 10; v += 4; p /= 10;}
            continue;
        }
        v += (p * 3);
        p /= 10;
        while (p > 0){v -= (p * 3);p /= 10;}
    }
    cout << prev;
}