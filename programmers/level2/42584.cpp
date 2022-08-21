#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> prices) {
    int sz = prices.size();
    vector<int> answer(sz);
    for (int i = 0; i < sz; ++i) answer[i] = sz - i - 1;
    for (int i = 0; i < sz; ++i) {
        for (int j = i + 1; j < sz; ++j) {
            if (prices[i] > prices[j]) {
                answer[i] = j - i;
                break;
            }
        }
    }
    return answer;
}