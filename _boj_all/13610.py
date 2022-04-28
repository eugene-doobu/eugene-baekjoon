a, b = map(int, input().split())
lab, ca, cb = 1, a, b
while True:
    ca += a
    cb += b
    lab += 1
    if cb - ca >= b:
        print(lab)
        break