#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
using pii = pair<int, int>;

priority_queue<pii> maxHeap;
priority_queue<pii, vector<pii>, greater<>> minHeap;
bool visited[1'000'001];

void DoubleHq(int i)
{
    char input; int val; cin >> input >> val;
    if (input == 'I')
    {
        maxHeap.push({ val, i });
        minHeap.push({ val, i });
        visited[i] = true;
    }
    else
    {
	    if (val == -1)
	    {
		    while (!minHeap.empty() && !visited[minHeap.top().second])
                minHeap.pop();

            if (minHeap.empty())
                return;

            const int idx = minHeap.top().second;
            minHeap.pop();
            visited[idx] = false;
	    }
        else
        {
            while (!maxHeap.empty() && !visited[maxHeap.top().second])
                maxHeap.pop();

            if (maxHeap.empty())
                return;

            const int idx = maxHeap.top().second;
            maxHeap.pop();
            visited[idx] = false;
        }
    }
}

int main()
{
    fastio;
    int n; cin >> n;
    while(n--)
    {
        int numOfElement; cin >> numOfElement;
        priority_queue<pii> tmp_maxHeap;
        priority_queue<pii, vector<pii>, greater<>> tmp_minHeap;
        maxHeap = tmp_maxHeap;
        minHeap = tmp_minHeap;
        memset(visited, false, sizeof(visited));

        for (int i = 0; i < numOfElement; ++i)
            DoubleHq(i);

        while (!minHeap.empty() && !visited[minHeap.top().second])
            minHeap.pop();

        while (!maxHeap.empty() && !visited[maxHeap.top().second])
            maxHeap.pop();

        if (!minHeap.empty() && !maxHeap.empty())
            cout << maxHeap.top().first << ' ' << minHeap.top().first << "\n";
        else
            cout << "EMPTY\n";
    }
}