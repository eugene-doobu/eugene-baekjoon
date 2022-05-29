class Solution {
private:
    int base;
    void sol(int n, int left, int right, string curr, vector<string>& vec) {
        if (n == 0) {
            if(left == right) vec.push_back(curr);
            return;
        }
        if (left > right) sol(n - 1, left, right + 1, curr + ")", vec);
        if (left < base) sol(n - 1, left + 1, right, curr + "(", vec);
    }
public:
    vector<string> generateParenthesis(int n) {
        base = n;
        vector<string> vec;
        sol(n * 2 - 1, 1, 0, "(", vec);
        return vec;
    }
};