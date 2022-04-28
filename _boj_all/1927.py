import heapq
hq = []
rst = []
n = int(input())
for _ in range(n):
    action = int(input())
    if action == 0 and hq:
        rst.append((heapq.heappop(hq)))
    elif action == 0:
        rst.append(0)
    else:
        heapq.heappush(hq, action)
for data in rst:
    print(data)