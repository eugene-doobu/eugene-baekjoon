_max, curr = 0, 0
for _ in range(4):
    tmp = list(map(int, input().split()))
    curr -= tmp[0]
    curr += tmp[1]
    _max = max(_max, curr)
print(_max)
