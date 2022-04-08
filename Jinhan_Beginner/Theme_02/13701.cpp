#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
bitset<1 << 25> A;
int main() { fastio; for (int n; cin >> n;) if (!A[n]) { cout << n << ' '; A[n] = 1; }}