#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

deque<string> split(string str, char delimiter);

int main() {
	int t; string s;
	cin >> t;
	cin.ignore();
	for (int i = 0; i < t; i++) {
		string rst = "";
		getline(cin, s);
		auto ss = split(s, ' ');
		ss.push_back(ss.front());
		ss.pop_front();
		ss.push_back(ss.front());
		ss.pop_front();
		for (auto i = ss.begin(); i < ss.end(); ++i) {
			rst += *i + " ";
		}
		cout << rst << "\n";
	}
	return 0;
}

deque<string> split(string input, char delimiter) {
	deque<string> answer;
	stringstream ss(input);
	string temp;

	while (getline(ss, temp, delimiter)) {
		answer.push_back(temp);
	}

	return answer;
}