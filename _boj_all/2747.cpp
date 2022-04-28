#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
typedef unsigned long long ll;
using namespace std;

int main() {
    fastio;
    int n; cin >> n;
    
    ll fibo[46];
    fibo[0] = 0; fibo[1] = 1;
    for (int i = 2; i <= n; ++i) fibo[i] = fibo[i - 1] + fibo[i - 2];
    cout << fibo[n];
}