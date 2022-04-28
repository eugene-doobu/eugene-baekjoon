#include <bits/stdc++.h>
using namespace std;
int a[3], b[3], ans;
int main(){
    for(int i = 0; i < 3; i++) cin >> a[i];
    for(int i = 0; i < 3; i++) cin >> b[i];
    for(int i = 0; i < 3; i++) {
        if(a[i] < b[i]) ans += b[i] - a[i];
    }
    cout << ans;
}