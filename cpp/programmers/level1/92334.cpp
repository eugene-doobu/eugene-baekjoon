#include <bits/stdc++.h>
#include <regex>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    int idSize = id_list.size();
    vector<int> answer(idSize);
    unordered_map<string, set<string>> m;
    unordered_map<string, int> reportM;
    unordered_map<string, bool> blockM;
    for (auto reportData : report) {
        regex re(" "); smatch match;
        if (regex_search(reportData, match, re)) {
            if (!(m[match.prefix()].find(match.suffix()) != m[match.prefix()].end())) {
                m[match.prefix()].insert(match.suffix());
                reportM[match.suffix()]++;
            }
        }
    }
    for (int i = 0; i < idSize; ++i) {
        if (reportM[id_list[i]] >= k) blockM[id_list[i]] = true;
    }
    for (int i = 0; i < idSize; ++i) {
        for (auto blockUser : m[id_list[i]]) {
            if (blockM[blockUser]) answer[i]++;
        }
    }
    return answer;
}