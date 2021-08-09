n, m = list(map(int, input().split(' ')))
cards = list(map(int, input().split(' ')))

sums=[]

for i in range(n-2):
    for j in range(i+1, n-1):
        for k in range(j+1, n):
            if cards[i]+cards[j]+cards[k] <= m:
                if cards[i]+cards[j]+cards[k] == 500:
                    print(cards[i],cards[j],cards[k])
                sums.append(cards[i]+cards[j]+cards[k])
print(max(sums))