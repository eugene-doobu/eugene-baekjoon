L, P = map(int, input().split())
n, lst = L*P, list(map(int, input().split()))
for m in lst:
    print(m - n, end=' ')