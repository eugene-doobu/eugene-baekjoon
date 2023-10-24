#include <unordered_map>
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
using pii = pair<int, int>;

int b[201][201];

int main()
{
	fastio;
	for (int i=1; i<=200; ++i)
	{
		b[i][1] = 1;
		b[i][i] = 1;
		b[i][2] = i + 1;
		b[1][i] = i;
	}
	for(int i=2; i<=200; ++i)
	{
		for(int j=3; j<=200; ++j)
		{
			b[i][j] = (b[i - 1][j] + b[i][j-1]) % 1000000000;
		}
	}

	int n, k;  cin >> n >> k;
	//for(int i=1; i<=n; ++i)
	//{
	//	for (int j = 1; j <= k; ++j)
	//	{
	//		cout << b[i][j] << ' ';
	//	}
	//	cout << "\n";
	//}

	cout << b[n][k];
}
