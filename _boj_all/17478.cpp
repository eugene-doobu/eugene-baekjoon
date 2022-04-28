#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

string tap(int n) {
	string tmp = "____", rst="";
	for (int i = 0; i < n; ++i) rst += tmp;
	return rst;
}

void recur(int n, int depth) {
	if (n > 0) 
	{
		cout << tap(depth) << "\"����Լ��� ������?\"\n"
			<< tap(depth) << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n"
			<< tap(depth) << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n"
			<< tap(depth) << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		recur(n - 1, depth + 1);
	}
	else {
		cout << tap(depth) << "\"����Լ��� ������?\"\n"
			<< tap(depth) << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n"
			<< tap(depth) << "��� �亯�Ͽ���.\n";
		return;
	}
	cout << tap(depth) << "��� �亯�Ͽ���.\n";
}

int main() {
	fastio;
	int n; cin >> n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	recur(n, 0);
}