import sys
cnt = [0 for _ in range(10001)]
n = int(input())
for _ in range(n):
    num = int(sys.stdin.readline())
    cnt[num] += 1
for i in range(1, 10001):X
    if cnt[i] != 0:
        for j in range(cnt[i]):
            print(i)