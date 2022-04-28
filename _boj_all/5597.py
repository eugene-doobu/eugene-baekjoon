arr = [1 for _ in range(31)]
for _ in range(28):
  arr[int(input())] = 0
for i in range(1, len(arr)):
  if arr[i]: print(i)