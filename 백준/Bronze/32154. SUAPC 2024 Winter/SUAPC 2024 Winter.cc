#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
vector<vector<string>> board = { {"11", "A B C D E F G H J L M"},
                    {"9", "A C E F G H I L M"},
                    {"9", "A C E F G H I L M"},
                    {"9", "A B C E F G H L M"},
                    {"8", "A C E F G H L M"},
                    {"8", "A C E F G H L M"},
                    {"8", "A C E F G H L M"},
                    {"8", "A C E F G H L M"},
                    {"8", "A C E F G H L M"},
                    {"8", "A B C F G H L M"} };
int main() {
    fastio; long n; cin >> n;
    cout << board[n - 1][0] << '\n' << board[n-1][1];
}