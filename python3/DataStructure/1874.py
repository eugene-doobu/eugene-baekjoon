n = int(input())
stk = []
rst = []
for i in range(n):
    stk.append(int(input()))
currMax = 0

for i in range(n):
    if stk[i] >= currMax:
        for j in range(stk[i] - currMax):
            rst.append('+')
        currMax = stk[i]
    elif stk[i] > stk[i-1]:
        rst[0] = 'NO'
        break
    rst.append('-')

if rst[0] == 'NO':
    print('NO')
else:
    for c in rst:
        print(c)