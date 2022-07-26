#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    int answer = 0, sz = s.size();
    for (int i = 0; i < sz; ++i) {
        bool isVaild = true;
        stack<char> stk;
        for (int j = 0; j < sz; ++j) {
            int idx = (i + j + sz) % sz;
            if (stk.size() >= 1) {
                char a = stk.top();
                if (a + 1 == s[idx] || a + 2 == s[idx]) {
                    stk.pop();
                    continue;
                }
            }
            stk.push(s[idx]);
        }
        if (stk.size() == 0) answer++;
    }
    return answer;
}