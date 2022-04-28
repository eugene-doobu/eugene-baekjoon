#include <iostream>
using namespace std;
int main()
{
	int _max = 0, curr = 0;
	for (int i = 0; i < 10; ++i) {
		int a, b;
		scanf("%d %d", &a, &b);
		curr -= a;
		curr += b;
		_max = max(_max, curr);
	}
	printf("%d", _max);
}