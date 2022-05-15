class Solution {
public:
    bool canJump(vector<int>& nums) {
        int sz = nums.size();
	    if (sz == 1) return true;
        vector<int> v(sz);
        v[0] = nums[0];
        for (int i = 1; i < sz; ++i)
		    v[i] = i <= v[i - 1] ? max(i + nums[i], v[i-1]) : v[i];
        return v[sz - 1] > 0 ? true : false;
    }
};