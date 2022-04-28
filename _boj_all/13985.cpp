#include <bits/stdc++.h>
using namespace std;
int main() {
    char a[10];
    cin.getline(a,10);
    if ((a[0] - '0') + (a[4] - '0') == (a[8] - '0'))
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}
