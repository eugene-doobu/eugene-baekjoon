#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> dots) {
    int minX = dots[0][0], maxX = dots[0][0];
    int minY = dots[0][1], maxY = dots[0][1];
    for (int i=0; i<4; ++i){
        minX = min(minX, dots[i][0]);
        maxX = max(maxX, dots[i][0]);
        minY = min(minY, dots[i][1]);
        maxY = max(maxY, dots[i][1]);
    }
    return (maxX - minX) * (maxY - minY);
}