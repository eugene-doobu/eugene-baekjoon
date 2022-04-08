n = int(input())
A, B = [], []
A = list(map(int, input().split()))
B = list(map(int, input().split()))
lst, rst = [], 0
for idx, e in enumerate(B):
    lst.append((e, idx))
lst.sort(reverse=True)
A.sort()
for i in range(n):
    rst += lst[i][0] * A[i]
print(rst)