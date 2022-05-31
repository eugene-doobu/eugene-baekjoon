#include<bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int n, m;
int arr[9];
bool visited[9];

void dfs(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        arr[cnt] = i;
        dfs(cnt + 1);
    }
}

int main(void) {
	fastio;
    cin >> n >> m;
    dfs(0);
}



