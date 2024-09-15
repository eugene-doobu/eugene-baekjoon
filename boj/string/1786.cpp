#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

inline long long mod(long long x, long long q)
{
	if (x >= 0) return x % q;
	return ((-x / q + 1) * q + x) % q;
}

int main() {
	fastio;
	string txt, pat;
	getline(cin, txt);
	getline(cin, pat);
	if (txt.size() < pat.size()) {
		cout << "0";
		return 0;
	}
	const long long d = 128, q = 1000000007;
	const long long M = pat.size(), N = txt.size();
	vector<long long> rst;
	long long p = 0, t = 0, h = 1;
	for (int i=0; i < M; ++i)
	{
		p = mod(d * p + pat[i], q);
		t = mod(d * t + txt[i], q);
		if (i != M - 1) h = mod(h * d, q);
	}
	for (int i=0; i<=N-M; ++i)
	{
		if (p == t) rst.push_back(i + 1);
		if (i<N-M)
		{
			t = mod(t + q - mod(h * txt[i], q), q);
			t = mod(t * d + txt[i + M], q);
		}
	}
	cout << rst.size() << "\n";
	for (auto value : rst) cout << value << ' ';
}