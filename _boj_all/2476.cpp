#include <iostream>
using namespace std;
int main()
{
	int _max = 0, nums;
	scanf("%d", &nums);
	for (int i = 0; i < nums; ++i) {
		int curr = 0, a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a == b && b == c) curr = 10000 + a * 1000;
		else if (a == b || a == c) curr = 1000 + a * 100;
		else if (c == b) curr = 1000 + b * 100;
		else curr = max(max(a, b),c) * 100;
		_max = max(_max, curr);
	}
	printf("%d", _max);
}