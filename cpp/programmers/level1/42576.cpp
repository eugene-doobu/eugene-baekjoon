#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    int s = participant.size();
    for (int i = 0; i < s; ++i) {
        if (participant[i] != completion[i]) return participant[i];
    }
    return "";
}