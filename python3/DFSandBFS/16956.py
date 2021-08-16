r, c = map(int, input().split())
lst = [list(input()) for _ in range(r)]
isImpossible = False
for y in range(r):
    for x in range(c):
        if lst[y][x] == 'W':
            if y > 0 and lst[y-1][x] == 'S':
                isImpossible = True
            if y < (r-1) and lst[y+1][x] == 'S':
                isImpossible = True
            if x > 0 and lst[y][x-1] == 'S':
                isImpossible = True
            if x < (c-1) and lst[y][x+1] == 'S':
                isImpossible = True

            if y > 0 and lst[y-1][x] == '.':
                lst[y-1][x] = 'D'
            if y < (r-1) and lst[y+1][x] == '.':
                lst[y+1][x] = 'D'
            if x > 0 and lst[y][x-1] == '.':
                lst[y][x-1] = 'D'
            if x < (c-1) and lst[y][x+1] == '.':
                lst[y][x+1] = 'D'
if isImpossible:
    print('0')
else:
    print('1')
    for items in lst:
        for item in items:
            print(item, end='')
        print()