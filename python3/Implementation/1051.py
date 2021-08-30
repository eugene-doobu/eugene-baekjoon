n, m = map(int, input().split())
maxSize = min(n, m)
nums, maxSq = [], 0
for _ in range(n):
    nums.append(input())
for i in range(0, n-1):
    for j in range(0, m-1):
        addSize = 1
        while addSize + i < n and addSize + j<m:
            if nums[i][j] == nums[addSize+i][j] == nums[i][addSize+j]== nums[addSize+i][addSize+j]:
                maxSq = max(maxSq, (addSize+1) **2)
            addSize+=1
print(max(maxSq,1))