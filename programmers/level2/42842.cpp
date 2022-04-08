#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int pB = brown - 4;
    int h = 1, w = yellow;
    while (yellow) {
        if (h * 2 + w * 2 == pB) {
            answer.push_back(w + 2);
            answer.push_back(h + 2);
            break;
        }
        do {
            h++;
        } while (yellow%h);
        w = yellow / h;
    }
    return answer;
}