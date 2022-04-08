N, L, K = map(int, input().split())
lst = []
rst = 0
for _ in range(N):
    lst.append(list(map(int, input().split())))
lst.sort(key = lambda x: x[1])
for data in lst:
    if K > 0 and data[1] <= L:
        rst += 140
        K -= 1
        data[0] = 51
for data in lst:
    if K > 0 and data[0] <= L:
        rst += 100
        K -= 1
print(rst)