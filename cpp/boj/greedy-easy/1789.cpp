#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	long a, n = 1;
	scanf("%d", &a);
	while (a - n > n) {
		a -= n;
		n++;
	}
	printf("%d", n);
}
