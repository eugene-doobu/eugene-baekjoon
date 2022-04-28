#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    string x, rst = ""; cin >> x;
    rst += x[0];
    for (int i = 0; i < x.size()-1; ++i) 
        if (x[i] == '-') rst += x[i + 1];
    cout << rst;
}