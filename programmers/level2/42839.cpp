#include <bits/stdc++.h>
using namespace std;

bool IsPrimeNumber(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int solution(string numbers) {
    int answer = 0;
    int sz = numbers.size();
    vector<int> v(sz); set<int> s;
    for (int i = 0; i < sz; ++i) v[i] = numbers[i] - '0';
    sort(v.begin(), v.end());
    do {
        for (int i = 0; i <= sz; ++i) {
            int digit = 0, tmp = 0;
            for (int j = 0; j < i; ++j) {
                tmp += v[j] * pow(10, digit);
                digit++;
                if (IsPrimeNumber(tmp))  s.insert(tmp);
            }
        }
    } while (next_permutation(v.begin(), v.end()));
    return s.size();
}