#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {fastio; long long a, b, c; cin >> a >> b >> c; cout << a + b - c << "\n" << stoi(std::to_string(a) + std::to_string(b)) - c;}