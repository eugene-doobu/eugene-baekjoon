def chargeCandey(lst, N):
    for i in range(N):
        if lst[i] % 2 == 1:
            lst[i] += 1
def checkCandy(lst, N):
    rst = True
    for i in range(N-1):
        if lst[i] != lst[i+1]:
            rst = False
            break
    return rst

T = int(input())
for _ in range(T):
    N = int(input())
    C = list(map(int, input().split()))
    rst = 0
    while True:
        tmp = [] #»çÅÁÀÇ Àı¹İ
        chargeCandey(C, N)
        if checkCandy(C, N):
            print(rst)
            break
        rst += 1
        for i in range(N):
            tmp.append(C[i]//2)
        for i in range(N):
            C[i] -= tmp[i]
            C[(i+1)%N] += tmp[i]