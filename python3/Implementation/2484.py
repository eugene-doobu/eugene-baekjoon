rst = []
n = int(input())
for _ in range(n):
    lst = sorted(list(map(int,input().split())))
    if lst[0] == lst[1] == lst[2] == lst[3]:
        rst.append(50000 + lst[0] * 5000)
    elif lst[0] == lst[1] == lst[2]:
        rst.append(10000 + lst[1] * 1000)
    elif lst[3] == lst[1] == lst[2]:
        rst.append(10000 + lst[1] * 1000)
    elif lst[0] == lst[1] and lst[2] == lst[3]:
        rst.append(2000 + lst[1] * 500 + lst[2] * 500)
    elif lst[0] == lst[1]:
        rst.append(1000 + lst[1] * 100)
    elif lst[1] == lst[2]:
        rst.append(1000 + lst[1] * 100)
    elif lst[2] == lst[3]:
        rst.append(1000 + lst[2] * 100)
    else:
        rst.append(max(lst)*100)
print(max(rst))
print(rst)