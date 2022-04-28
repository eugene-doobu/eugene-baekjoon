#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int a, b, c; cin >> a >> b >> c;
    if (a + b + c != 180) cout << "Error";
    else if (a == b && b == c && c == 60) cout << "Equilateral";
    else if (a == b || a == c || b == c) cout << "Isosceles";
    else cout << "Scalene";
}