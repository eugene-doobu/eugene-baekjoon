#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a[2];
    cin >> a[0] >> a[1];
    if(!(a[0] % 2) || !(a[1] % 2)) cout << 0;
    else cout << min(a[0], a[1]);
}