#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;

int main() {
    fastio; int t; cin >> t;
    for (int i=0; i<t; ++i)
    {
        string b1, b2; cin >> b1 >> b2;
        int rst = 0, len = b1.length();
        for (int j = 0; j < len; ++j)
            if (b1[j] != b2[j]) rst++;
        cout << "Hamming distance is " << rst << ".\n";
    }
}