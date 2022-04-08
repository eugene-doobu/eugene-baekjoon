#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() { 
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", max(b - a - 1, c - b - 1));
}

