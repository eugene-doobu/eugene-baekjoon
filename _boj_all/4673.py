x = list(range(1,10001))
result = list()
i = 0

while True:
  i += 1;
  y = list()
  z = i
  while z > 0:
    y.append(z%10)
    z//=10

  for _y in y:
    z += _y
  z += i

  if i>10000: break
  result.append(z)

for _x in x:
  if _x not in result:
    print(_x)