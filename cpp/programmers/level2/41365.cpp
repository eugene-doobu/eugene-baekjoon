#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;
using pii = pair<int, int>;

int result;

void TEST(vector<int> numbers, int target, int curr) {
    if (!numbers.empty()) {
        int val = numbers.back(); numbers.pop_back();
        TEST(numbers, target, curr + val);
        TEST(numbers, target, curr - val);
    }
    else {
        if (target == curr) result++;
    }
}

int solution(vector<int> numbers, int target) {
    TEST(numbers, target, 0);
    return result;
}