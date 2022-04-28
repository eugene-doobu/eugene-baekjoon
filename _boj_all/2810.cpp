#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
    int t, numL = 0;
    string s;
    scanf("%d", &t);
    cin >> s;

    for (int i = 0; i<s.length(); i++) {
        if (s[i] == 'L') numL++;
    }
    printf("%d", min(t, t + 1 - (numL / 2)));
}

