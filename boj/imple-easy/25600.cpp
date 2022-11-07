#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main(){fastio;int n, rst = 0, tmp; cin >> n;while (n--) {int a, b, c; cin >> a >> b >> c;tmp = (a * (b + c));tmp = (a == (b + c)) ? (tmp * 2) : tmp;rst = max(rst, tmp);}cout << rst;}