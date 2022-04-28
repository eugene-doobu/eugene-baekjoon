#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

vector<string> split(string str, char delimiter);

int main() {
	int t; string s;
	cin >> t;
	cin.ignore();
	for (int i = 0; i < t; i++) {
		int rst = 0;
		getline(cin, s);
		auto splitedString = split(s, ' ');
		for (auto number : splitedString) {
			rst += stoi(number);
		}
		cout << rst << "\n";
	}
	return 0;
}

vector<string> split(string input, char delimiter) {
	vector<string> answer;
	stringstream ss(input);
	string temp;

	while (getline(ss, temp, delimiter)) {
		answer.push_back(temp);
	}

	return answer;
}