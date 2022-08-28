#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = 0, len = queue1.size();
    long sum1 = 0, sum2 = 0;
    deque<int> q1, q2;

    if ((sum1 + sum2) % 2 == 1) return -1;

    for (int val : queue1) { q1.push_back(val); sum1 += val; }
    for (int val : queue2) { q2.push_back(val); sum2 += val; }

    int i = len * 3;
    while (i--) {
        if (sum1 == sum2) return answer;
        if (sum1 > sum2) {
            long num = q1.front(); q1.pop_front();
            q2.push_back(num);
            sum1 -= num;
            sum2 += num;
            answer++;
        }
        if (sum1 < sum2) {
            long num = q2.front(); q2.pop_front();
            q1.push_back(num);
            sum1 += num;
            sum2 -= num;
            answer++;
        }
    }
    return -1;
}