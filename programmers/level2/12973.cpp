#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int solution(string s)
{
    stack<char> stk;
    while (s.size()) {
        if (!stk.empty() && stk.top() == s.back()) {
            stk.pop();
            s.pop_back();
        }
        if (!s.empty()) { stk.push(s.back()); s.pop_back(); }
        if (!s.empty() && stk.top() == s.back()) {
            stk.pop();
            s.pop_back();
        }
        if (stk.size() >= 2) {
            char up = stk.top(); stk.pop();
            char down = stk.top(); stk.pop();
            if (up != down) {
                stk.push(down); stk.push(up);
            }
        }
    }
    return stk.empty() ? 1 : 0;
}