n, m = list(map(int, input().split(' ')))
nlist = [1 for _ in range(n)]
mlist = [1 for _ in range(m)]
mat = []
for i in range(n):
    mat.append(input())
for i in range(n):
    for j in range(m):
        if mat[i][j] == 'X':
            nlist[i] = 0
            mlist[j] = 0
print(max(sum(nlist), sum(mlist)))