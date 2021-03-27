nums = []
i = int(input())

for j in range(1,i+1):
  if i % j == 0:
    nums.append(j)

print(sum(nums)*5-24)