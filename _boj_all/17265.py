
def TreeSearch(x, y, pre, _sum):
  if pre == '+' or pre == '-' or pre == '*':
    if pre =='+':
      _sum += int(w[x][y])
    if pre =='-':
      _sum -= int(w[x][y])
    if pre =='*':
      _sum *= int(w[x][y])

  if(x == n-1 & y == n-1):
    _result.append(_sum)
    return
  if(x < n-1):
    TreeSearch(x+1, y, w[x][y], _sum)
  if(y < n-1):
    TreeSearch(x, y+1, w[x][y], _sum)

_result = []

n = int(input())
q = list(input() for _ in range(n))
w = []
for i in q:
  w.append(i.split())

TreeSearch(0,0,w[0][0],int(w[0][0]))
_result.sort()

print(_result[len(_result)-1], end=" ")
print(_result[0])
