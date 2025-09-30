#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <string>
using namespace std;
int main() {
    fastio;
    string s;
    getline(cin, s);
    if (s.length() > 2 && s.front() == '"' && s.back() == '"')
        cout << s.substr(1, s.length() - 2) << "\n";
    else
        cout << "CE\n";
}