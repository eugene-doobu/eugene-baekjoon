arr = list(map(int, input().split(' ')))
diff = 0
if arr[0] - arr[1] == 1:
    diff = 1
else:
    diff = -1
isOk = True
for i in range(1,7):
    if arr[i] - arr[i+1] == diff:
        continue
    else:
        isOk = False

if isOk and diff == 1:
    print("descending")
elif isOk and diff == -1:
    print("ascending")
else:
    print("mixed")