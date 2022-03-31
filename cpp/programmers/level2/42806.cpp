#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int solution(string name) {
    // ABCDEFGHIJKLM N OPQRSTUVWZYZ
    // 0123456789012 3 456789012345
    // 0543210987654 3 210987654321

    // BBBBAAAABA
    int answer = 0, sz = name.size(), move = sz - 1;
    // left right
    for (int i = 1; i < sz; ++i) {
        if (name[i] == 'A') {
            int end = i;
            while (end < sz && name[end] == 'A') end++;
            int left = i - 1, right = sz - end;
            move = min(move, left + right + min(left, right));
        }
    }
    cout << move << ' ';

    // up down
    for (int i = 0; i < sz; ++i) {
        answer += 13 - abs(name[i] - 'N');
    }
    return answer + move;
}