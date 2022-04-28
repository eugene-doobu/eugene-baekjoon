#include <bits/stdc++.h>
#include <regex>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;
using pii = pair<int, int>;

void DFS(string curr, vector<vector<string>>& tickets, vector<bool>& vistied, vector<string>& answer, int useTickets) {

}

vector<string> solution(vector<vector<string>> tickets) {
    vector<string> answer;
    string startSpot = "ICN";
    map<string, set<string>> m;
    map<pair<string, string>, int> bm;
    for (int i = 0; i < tickets.size(); ++i) {
        m[tickets[i][0]].insert(tickets[i][1]);
        bm[{ tickets[i][0], tickets[i][1] }]++;
    }
    stack<string> stk;
    stk.push(startSpot); answer.push_back(startSpot);

    while (!stk.empty()) {
        auto curr = stk.top(); stk.pop();
        for (auto dest : m[curr]) {
            if (bm[{curr, dest}] <= 0) continue;
            stk.push(dest); bm[{curr, dest}]--;
            answer.push_back(dest);
        }
    }
    return answer;
}

int main() {
    fastio;
    //solution({ {"ICN", "BBB"},{"ICN", "CCC"},{"BBB", "CCC"},{"CCC", "BBB"},{"CCC", "ICN"} });
    int a, b, c; cin >> a >> b >> c;
    cout << 4 * max(a - b, b) * max(a - c, c);
}
