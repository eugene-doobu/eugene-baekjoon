#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;
    for(int j=0; j<board.size(); ++j){
        for(int i=0; i<board[0].size(); ++i){
            if (i + j <= k)
                answer += board[j][i];
        }
    }
    return answer;
}