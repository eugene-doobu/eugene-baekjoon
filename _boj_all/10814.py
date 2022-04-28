n = int(input())
vals = []
for i in range(n):
    age, name = list(input().split(' '))
    vals.append([int(age), i, name])
vals.sort(key=lambda x:(x[0], x[1]))
for val in vals:
    print(val[0], val[2])