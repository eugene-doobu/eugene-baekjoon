#include <bits/stdc++.h>

using namespace std;

int solution(int n, int k) {
    int fd = n / 10;
    return (n * 12000) + ((k - fd) * 2000);
}