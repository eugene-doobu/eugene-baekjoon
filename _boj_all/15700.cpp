#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;
using pii = pair<int, int>;

#define distance first
#define vertex second

int v, e, st;

vector<int> adj[20005];
const int INF = 1e9 + 10;

int solution(int n, vector<vector<int>> edge) {
    vector<int> d(20005, INF);
    for (auto edg : edge) {
        adj[edg[0]].push_back(edg[1]);
        adj[edg[1]].push_back(edg[0]);
    }
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    d[1] = 0;
    pq.push({ d[1], 1 });
    while (!pq.empty()) {
        auto curr = pq.top(); pq.pop();
        if (d[curr.vertex] != curr.distance) continue;
        for (auto nxt : adj[curr.vertex]) {
            if (d[nxt] <= d[curr.vertex] + 1) continue;
            d[nxt] = d[curr.vertex] + 1;
            pq.push({ d[nxt], nxt });
        }
    }
    auto startIter = d.begin() + 1;
    auto endIter   = d.begin() + n + 1;
    return count(startIter, endIter, *max_element(startIter, endIter));
}

int main() {
    fastio;
    unsigned long long a, b; cin >> a >> b; cout << (a * b)/2;
}
