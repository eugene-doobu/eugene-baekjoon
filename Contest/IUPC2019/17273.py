import copy
#input
n, m = map(int, input().split())

front = []
back = []
cards = list(input().split() for _ in range(n))

for card in cards:
  front.append(int(card[0]))
  back.append(int(card[1]))
 
k = list(int(input()) for _ in range(m))

#imple
curr = copy.deepcopy(front)

for i in range(m):
  for j in range(len(curr)):
    if curr[j] <= k[i]:
      if curr[j] == front[j]:
        curr[j] = back[j]
      else:
        curr[j] = front[j]

result = 0
for k in curr:
  result += k

print(result)