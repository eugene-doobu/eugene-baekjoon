class Solution {
    unordered_map<char, string> m;
    vector<string> v;

    void MapInit(unordered_map<char, string>& m) {
        m['2'] = "abc"; m['3'] = "def"; m['4'] = "ghi";
        m['5'] = "jkl"; m['6'] = "mno"; m['7'] = "pqrs";
        m['8'] = "tuv"; m['9'] = "wxyz";
    }
    
vector<string> CombinationLetter(string str) {
	if (str == "") return v;
	vector<string> curr;
	for (int j = 0; j < max(1, (int)v.size()); ++j)
		for (int i = 0; i < m[str[0]].length(); ++i)
			curr.push_back((v.size() ? ("" + v[j]) : "") + m[str[0]][i]);
	v = curr;
	return CombinationLetter(str.substr(1));
}  
public:
    vector<string> letterCombinations(string digits) {
	    MapInit(m);
        return CombinationLetter(digits);
    }
};