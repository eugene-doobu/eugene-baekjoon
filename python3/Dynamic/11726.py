import sys

tile = []

def tiling(n):
  if n == 1: return 1
  if n == 2: return 2
  if tile[n] == 0:
    tile[n] = tiling(n-1) + tiling(n-2)
  return tile[n]

#main
sys.setrecursionlimit(2000)
n = int(input())

for _ in range(1002):
  tile.append(0)
tile[1] = 1
tile[2] = 2
print(tiling(n) % 10007)