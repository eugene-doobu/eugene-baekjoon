class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (auto i = nums.begin() + 1; i != nums.end(); ++i) {
            *i += *(i - 1);
        }
        return nums;
    }
};