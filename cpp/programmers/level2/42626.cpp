#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int> > pq(scoville.begin(), scoville.end());
    while (pq.size() >= 2 && pq.top() < K) {
        int first = pq.top();  pq.pop();
        int second = pq.top(); pq.pop();
        pq.push(first + (second * 2));
        answer++;
    }
    if (pq.top() < K)    return -1;
    return answer;
}