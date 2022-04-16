class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	int sz = nums.size();
	vector<int> v(2); unordered_map<int, int> m;
	for (int i = 0; i < sz; ++i) {
		if (m.count(target - nums[i])) {
			v[0] = i; v[1] = m[target - nums[i]];
	        return v;
		}
		m[nums[i]] = i;
	}
	return v;
}
};