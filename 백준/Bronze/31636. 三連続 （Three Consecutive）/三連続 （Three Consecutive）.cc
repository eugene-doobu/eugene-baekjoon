#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <string>
using namespace std;
int main() {
    fastio;
    int n; string s;
    cin >> n >> s;
    if (s.find("ooo") != string::npos) cout << "Yes\n";
    else cout << "No\n";
}