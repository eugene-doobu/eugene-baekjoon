n = int(input())
lst = list(map(int, input().split(' ')))
for i in range(1, n):
    lst[i] = lst[i]*(i+1)-sum(lst[0:i])
print(" ".join(map(str, lst)))