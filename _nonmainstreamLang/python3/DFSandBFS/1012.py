def dfs(x, y):
  if x < 0 or y < 0 or x >= row or y >= col:
    return False
  if field[y][x] == 1:
    #print(y, x, "pop")
    field[y][x] = 0
    dfs(x+1, y)
    dfs(x-1, y)
    dfs(x, y+1)
    dfs(x, y-1)
    return True
  return False

for i in range(int(input())):
  # init
  row, col, cabbage = map(int, input().split())
  field  = [[0 for _ in range(row)] for _ in range(col)]
  count = 0

  # add cabbage
  for j in range(cabbage):
    tx,ty = map(int, input().split())
    field[ty][tx] = 1
  
  for _x in range(row):
    for _y in range(col):
      if dfs(_x, _y):
        count += 1
        """
        for x in range(col):
          print(field[x], x)
        """

  print(count)
  