#include <bits/stdc++.h>

using namespace std;

string solution(vector<int> numbers) {
    string rst = "";
    vector<string> strs;
    for (auto number : numbers) strs.push_back(to_string(number));
    sort(strs.begin(), strs.end(), [](string a, string b){
        if (a[0] == b[0]) {
            int tmp1 = stoi(a + b);
            int tmp2 = stoi(b + a);
            return tmp1 > tmp2;
        }
        return a > b;
        });
    for (auto str : strs) rst += str;
    if (rst.size() > 1 && rst[0] == '0' && rst[1] == '0') rst = "0";
    return rst;
}