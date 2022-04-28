n = int(input())
lst = []
for _ in range(n):
    lst.append(int(input()))

beforeL = -1
beforeR = -1
numL = 0
numR = 0
for i in range(n):
    if beforeL < lst[i]:
        beforeL = lst[i]
        numL += 1
    if beforeR < lst[n-i-1]:
        beforeR = lst[n-i-1]
        numR += 1
print(numL)
print(numR)