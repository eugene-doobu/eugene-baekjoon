lst, score, sum = list(map(int, input().split())), [56, 24, 14, 6], 0
for i in range(4): sum += (lst[i] * score[i])
print(sum)