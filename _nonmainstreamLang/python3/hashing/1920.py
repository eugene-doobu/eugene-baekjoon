n = int(input())
ns = set(map(int, input().split(' ')))
m = int(input())
ms = list(map(int, input().split(' ')))
for num in ms:
    if num in ns: print("1")
    else: print("0")