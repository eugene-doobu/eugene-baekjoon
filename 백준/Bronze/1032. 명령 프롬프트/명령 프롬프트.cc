#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <string>
using namespace std;
int main() {
    fastio;
    int n, i, j; string pattern, file;
    cin >> n; cin >> pattern;
    for (i = 0; i < n - 1; i++) {
        cin >> file;
        for (j = 0; j < pattern.length(); j++)
            if (pattern[j] != file[j])
                pattern[j] = '?';
    }
    cout << pattern << "\n";
}