#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for (const string& s : strArr) {
        if (s.find("ad") == string::npos) {
            answer.push_back(s);
        }
    }
    
    return answer;
}