def solution(n):
    array = [[0] * n for _ in range(n)]

    row = -1
    col = 0
    power = n
    qwe = 1
    while power >= 1:
      x = 0
      y = 0
      if (n-power) % 3 == 0:
        x = 0
        y = 1
      elif (n-power) % 3 == 1:
        x = 1
        y = 0
      elif (n-power) % 3 == 2:
        x = -1
        y = -1

      col += x
      row += y
      for k in range(power):
        array[row][col] = qwe
        qwe += 1
        col += x
        row += y
      col -= x
      row -= y
      power -=1

    rst = []  
    for k in array:
      for l in k:
        if l != 0:
          rst.append(l)
    return rst