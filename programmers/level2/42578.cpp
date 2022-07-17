#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1; map<string, int> m;
    for (int i = 0; i < clothes.size(); ++i) m[clothes[i][1]]++;
    for (auto kvp : m) answer *= (kvp.second + 1);
    return answer - 1;
}