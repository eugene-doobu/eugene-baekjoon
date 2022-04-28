#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n=0, m[100001], rst = -1;
	scanf("%d", &n); for (int i = 0; i < n; i++) scanf("%d", m + i);
	sort(m, m + n);
	for (int i = 0; i < n; i++) rst = max(rst, m[i]+n-i);
	printf("%d",rst + 1);
}

