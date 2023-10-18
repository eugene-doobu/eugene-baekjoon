#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
#define pii pair<int, int>

int main()
{
	fastio;
	int ans = 1; // ?
	int n;  cin >> n;
	priority_queue<int, vector<int>, greater<>> lastTimes;
	vector<pii> vpii;
	while (n--)
	{
		int a, b; cin >> a >> a >> b;
		vpii.push_back({ a,b });
	}
	sort(vpii.begin(), vpii.end());
	for (const auto& value : vpii)
	{
		const int start = value.first;
		const int end = value.second;

		if (lastTimes.empty())
		{
			lastTimes.push(end);
		}
		else
		{
			if (lastTimes.top() <= start)
				lastTimes.pop();
			lastTimes.push(end);
			ans = max(ans, (int)lastTimes.size());
		}
	}
	cout << ans;
	/*
	vector<vector<pii>> rst;
	for (const auto& value : vpii)
	{
		bool isAdded = false;

		for (auto& pairs : rst)
		{
			const auto& last = *(pairs.end() - 1);
			if (last.second < value.first)
			{
				pairs.push_back(value);
				isAdded = true;
				break;
			}
		}

		if (!isAdded)
		{
			vector<pii> tmp;
			tmp.push_back(value);
			rst.push_back(tmp);
		}
	}
	*/
}
