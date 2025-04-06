#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int a[6], r[3];
int main() {
    fastio;  for (int i = 0; i < 6; ++i) cin >> a[i];
    for (int i = 0; i < 3; ++i) r[i] = a[i] * a[i + 3];
    int mx = max(r[0], max(r[1], r[2]));
    string names[3] = {"Joffrey", "Robb", "Stannis"};
    for (int i = 0; i < 3; ++i)
        if (mx == r[i]) cout << names[i] << ' ';
}
