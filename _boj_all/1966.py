n = int(input())
for i in range(n):
    n, m = list(map(int, input().split(' ')))
    docs = list(map(int, input().split(' ')))
    cnt, idx = 0, 0
    maxdoc = max(docs)
    while True:
        if docs[idx] == maxdoc:
            cnt+=1
            docs[idx] = -1
            maxdoc = max(docs)
            if idx == m:
                break
        idx += 1
        idx %= n
    print(cnt)