class Solution {
public:
    string replaceDigits(string s) {
		string rst = "";
		for(int i=0; i<s.size(); i++){
			if (i % 2 == 0) rst += s[i];
			else rst += s[i - 1] + s[i]-'0';
		}
		return rst;
    }
};