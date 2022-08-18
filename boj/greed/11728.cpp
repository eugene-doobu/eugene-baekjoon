#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int a[1000001];
int b[1000001];

int main() {
    fastio;
    int aIdx = 0, bIdx = 0;
    int A, B; cin >> A >> B;
    for (int i = 0; i < A; ++i) cin >> a[i];
    for (int i = 0; i < B; ++i) cin >> b[i];
    while (aIdx < A && bIdx < B) {
        if (a[aIdx] <= b[bIdx]) cout << a[aIdx++] << ' ';
        else  cout << b[bIdx++] << ' ';
    }
    while (aIdx < A) cout << a[aIdx++] << ' ';
    while (bIdx < B) cout << b[bIdx++] << ' ';
}

