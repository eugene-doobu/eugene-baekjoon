#include <bits/stdc++.h>
#include <unordered_map>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	string q, w; cin >> q >> w;
	bitset<100000> a(q), b(w);
	cout << (a & b) << "\n" << (a | b) << "\n" << (a ^ b) << "\n" << (~a) << "\n" << (~b);
}