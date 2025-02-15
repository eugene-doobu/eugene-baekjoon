#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    string s = "WelcomeToSMUPC";
    int n; cin >> n; n--;
    cout << s[n % 14];
}