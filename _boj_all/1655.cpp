#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

struct Brother {
    int value; bool isForward = false;
    Brother(int v, bool forward) : value(v), isForward(forward) {}
    bool operator<(const Brother& b) const {
        if(isForward) return value < b.value;
        else value > b.value;
    }
};

int main() {
    fastio;
    int n; cin >> n; 
    priority_queue<int> fpq;
    priority_queue<int, vector<int>, greater<int>> rpq;
    for (int i = 0; i < n; ++i) {
        int num; cin >> num;
        if (fpq.size() > rpq.size()) rpq.push(num);
        else fpq.push(num);
        if (fpq.size() && rpq.size() && fpq.top() > rpq.top())
        {
            auto fv = fpq.top(); fpq.pop();
            auto rv = rpq.top(); rpq.pop();
            fpq.push(rv);
            rpq.push(fv);
        }
        cout << fpq.top() << "\n";
    }
}
