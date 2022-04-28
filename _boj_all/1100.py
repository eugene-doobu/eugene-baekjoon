board = []
count = 0
for i in range(8):
  board.append(input())
for i in range(8):
  for j in range(8):
    if not (i+j) % 2 and board[i][j] == 'F':
      count += 1

print(count)