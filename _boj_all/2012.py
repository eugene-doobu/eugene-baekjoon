N, arr = int(input()), []
for _ in range(N):
    arr.append(int(input()))
arr.sort()
rst = 0
for i in range(1, len(arr)+1):
    rst += abs(i-arr[i-1])
print(rst)