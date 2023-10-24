#include <unordered_map>
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
using pii = pair<int, int>;

int n, m;
int board[51][51];
vector<pii> house;
vector<pii> chickens;

int main()
{
	fastio;
	cin >> n >> m;

	int mn = INT32_MAX;
	vector<int> p;
	for(int r = 1; r <= n; ++r)
	{
		for (int c = 1; c <= n; ++c)
		{
			cin >> board[r][c];
			if (board[r][c] == 1)
				house.push_back(make_pair(r, c));
			if (board[r][c] == 2)
			{
				p.push_back(chickens.size());
				chickens.push_back(make_pair(r, c));
			}
		}
	}

	int cs = chickens.size();
	vector<int> v(cs);
	for (int i = 0; i < m; ++i) v[i] = 1;
	do {
		int currMin = 0;
		vector<pii*> tmpChickens;
		for (int i = 0; i < cs; i++) if (v[i]) tmpChickens.push_back(&chickens[p[i]]);
		for (const auto& home : house)
		{
			int chickenPrice = INT32_MAX;
			for (const auto& chicken : tmpChickens)
			{
				int dis = abs(chicken->first - home.first) + abs(chicken->second - home.second);
				chickenPrice = min(chickenPrice, dis);
			}
			//cout << chickenPrice << ' ';
			currMin += chickenPrice;
		}

		mn = min(mn, currMin);
		//cout << ": " << currMin << '\n';
	} while (prev_permutation(v.begin(), v.end()));
	cout << mn;
}
