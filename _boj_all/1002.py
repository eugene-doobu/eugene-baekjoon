import math
n = int(input())
for _ in range(n):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    dis = math.sqrt((x1-x2)**2 + (y1-y2)**2)
    rM, rm = max(r1, r2), min(r1, r2)
    if dis > rM + rm: print(0)
    elif x1 == x2 and y1 == y2 and r1 != r2: print(0)
    elif x1 == x2 and y1 == y2 and r1 == r2: print(-1)
    elif rM - rm < dis < rM + rm : print(2)
    elif dis == rM + rm: print(1)
    elif dis == rM - rm: print(1)
    elif dis < rM - rm: print(0)