from collections import deque
visited = [False for _ in range(100001)]
n, m = list(map(int,input().split()))

q = deque([[n, 0]])

while q:
    curr, level = q.popleft()
    visited[curr] = True
    if curr == m:
        print(level)
        break
    if curr+1 < 100001 and not visited[curr+1] :
        q.append([curr+1, level+1])
    if curr-1 >= 0 and not visited[curr-1] :
        q.append([curr-1, level+1])
    if curr*2 < 100001 and not visited[curr*2]:
        q.append([curr*2, level+1])