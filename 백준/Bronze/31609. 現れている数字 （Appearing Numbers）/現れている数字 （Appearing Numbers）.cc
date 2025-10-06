#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    fastio;
    int n, num, i; bool seen[10];
    memset(seen, 0, sizeof(seen));
    cin >> n;
    while (n--) {
        cin >> num;
        seen[num] = true;
    }
    for (i = 0; i < 10; i++)
        if (seen[i])
            cout << i << "\n";
}