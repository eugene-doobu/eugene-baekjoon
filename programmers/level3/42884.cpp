#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int solution(vector<vector<int>> routes) {
    int answer = 0, cam = -0x7f7f7f7f;
    sort(routes.begin(), routes.end(), [](auto a, auto b) -> auto
    {
        return a[1] < b[1];
    });
    for (auto car : routes) {
        if (car[0] > cam) {
            cam = car[1];
            answer++;
        }
    }
    return answer;
}