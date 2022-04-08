N = int(input())
K = int(input())

arr = list(map(int, input().split()))
arr.sort()

if K>=N:
    print(0)
else:
    dis = []
    for i in range(1, N):
        dis.append(arr[i] - arr[i-1])
    dis.sort(reverse=True)

    for i in range(K-1):
        dis[i]=0
    print(sum(dis))