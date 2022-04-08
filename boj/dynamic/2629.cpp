#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

bool S[31][40002];

void Scale(int nw, vector<int> w, int M) {
    for (int i = 0; i <= nw; ++i) S[i][0] = true;
    for (int i = 1; i <= nw; ++i) {
        for (int j = 1; j <= M; ++j) {
            if (j - w[i] >= 0) S[i][j] |= S[i - 1][j - w[i]];
            else S[i][j] |= S[i - 1][w[i] - j];
            if (j + w[i] < 40001) S[i][j] |= S[i - 1][j + w[i]];
            S[i][j] |= S[i - 1][j];
        }
    }
}

int main() {
    fastio;
    int nw, nb;
    cin >> nw; vector<int> w(nw+1); 
    for (int i = 1; i <= nw; ++i) cin >> w[i];
    Scale(nw, w, 40000);

    cin >> nb; vector<int> b(nb); 
    for (int i = 0; i < nb; ++i) {
        cin >> b[i];
        cout << (S[nw][b[i]] ? "Y" : "N") << " ";
    }
}