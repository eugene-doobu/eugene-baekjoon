def timecheck(t):
    h = t[3] - t[0]
    m = t[4] - t[1]
    s = t[5] - t[2]
    if s < 0:
        s += 60
        m -=1
    if m < 0:
        m += 60
        h -=1
    print(h, m, s)

for _ in range(3):
    timecheck(list(map(int, input().split())))
