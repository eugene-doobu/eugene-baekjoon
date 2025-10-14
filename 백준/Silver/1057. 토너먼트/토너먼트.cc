#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    int n, jimin, hansu, round;
    cin >> n >> jimin >> hansu;
    round = 0;
    while (jimin != hansu) {
        jimin = (jimin + 1) / 2;
        hansu = (hansu + 1) / 2;
        round++;
    }
    cout << round << "\n";
}