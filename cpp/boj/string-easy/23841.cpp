#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int y, x;
    string s;
    cin >> y >> x;
    int halfX = x / 2;
    for (int i = 0; i < y; i++) {
        cin >> s;
        for (int j = 0; j < x; j++) {
            if (s[j] != '.') s[x - j - 1] = s[j];
        }
        cout << s << endl;
    }

    return 0;
}