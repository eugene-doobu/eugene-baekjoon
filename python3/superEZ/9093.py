n = int(input())
for _ in range(n):
    tmp = list(input().split())
    for data in tmp:
        print(data[::-1], end=' ')
    print()