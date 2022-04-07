#include <bits/stdc++.h>

using namespace std;
vector<string> answer;
int n;

bool DFS(string curr, vector<vector<string>>& tickets, vector<bool>& vistied, vector<string> tmp, int count) {
    tmp.push_back(curr);
    if (count >= n) {
        answer = tmp;
        return true;
    }
    for (int i = 0; i < n; ++i) {
        if (!vistied[i] && tickets[i][0] == curr) {
            vistied[i] = true;
            if (DFS(tickets[i][1], tickets, vistied, tmp, count+1)) return true;
            vistied[i] = false;
        }
    }
    return false;
}

vector<string> solution(vector<vector<string>> tickets) {
    n = tickets.size();
    sort(tickets.begin(), tickets.end());
    vector<bool> vistied(n);
    DFS("ICN", tickets, vistied, answer, 0);
    return answer;
}