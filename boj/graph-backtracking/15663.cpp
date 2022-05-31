#include<bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int n, m;
int arr[9];
bool visited[9];
vector<int> v;

void dfs(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    int tmp = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && v[i] != tmp)
        {
            visited[i] = true;
            arr[cnt] = v[i];
            tmp = arr[cnt];
            dfs(cnt + 1);
            visited[i] = false;
        }
    }
}

int main(void) {
    fastio;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        int q; cin >> q; v.push_back(q);
    }
    sort(v.begin(), v.end());
    dfs(0);
}
