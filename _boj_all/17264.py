from sys import stdin

n, p = list(map(int, stdin.readline().split()))
w, l, g = list(map(int, stdin.readline().split()))
win = []
lose = []
for i in range(p):
    name, what = stdin.readline().split()
    if what == 'W':
        win.append(name)
    else:
        lose.append(name)
li = []
sum = 0
flag = False
for i in range(n):
    n = input()
    if n in win:
        sum += w
    else:
        if sum - l >= 0:
            sum -= l
        else:
            sum = 0
    if sum >= g:
        print("I AM NOT IRONMAN!!")
        flag = True
        break
if not flag:
    print("I AM IRONMAN!!")
  