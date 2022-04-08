n = int(input())
vals = []
for i in range(n):
    vals.append(list(map(int, input().split(' '))))
vals.sort(key=lambda x:(x[0], x[1]))
for val in vals:
    print(val[0], val[1])