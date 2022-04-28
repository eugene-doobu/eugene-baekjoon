z = int(input())
hansoo = 0

for j in range(1, z+1):
  difference=list()
  y=list()

  tmp = j
  # digit decomposition
  while tmp > 0:
    y.append(tmp%10)
    tmp//=10
    
  for i in range(1, len(y)):
    difference.append(y[i] - y[i-1])

  if len(set(difference)) < 2:
    hansoo += 1
  
  y=list().clear()

print(hansoo)