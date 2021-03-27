import sys

tile = []

def tiling(n):
  if n == 1: return 1
  if n == 2: return 3
  if tile[n] == 0:
    tile[n] = tiling(n-1) + 2 * tiling(n-2)
  return tile[n]

#main
sys.setrecursionlimit(2000)

for _ in range(251):
  tile.append(0)
tile[0] = 1
tile[1] = 1
tile[2] = 3

while True:
  try:
    print(tiling(int(input())))
  except EOFError:
    break