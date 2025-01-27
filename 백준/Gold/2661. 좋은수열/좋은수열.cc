#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int n; string s;
bool Check()
{
	int sz = s.size();
	for (int i = 1; i <= sz / 2; ++i)
		if (s.substr(sz - i, i) == s.substr(sz - 2 * i, i))
			return 0;
	return 1;
}
bool Dfs(int depth)
{
	if (depth == n)
	{
		cout << s; return 1;
	}
	for (int i=1; i<=3; ++i)
	{
		s.push_back('0' + i);
		if (Check() && Dfs(depth + 1))
			return 1;
		s.pop_back();
	}
	return 0;
}
int main() {
	fastio; cin >> n; Dfs(0);
}