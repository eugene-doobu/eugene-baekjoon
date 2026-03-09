#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    int sz = arr.size();
    for(int i=0; i<sz; ++i){
        if (flag[i]){
            for(int j=0; j<arr[i]*2;++j)
                answer.push_back(arr[i]);
        }
        else{
            for(int j=0; j<arr[i];++j)
                answer.pop_back();
        }
    }
    
    return answer;
}