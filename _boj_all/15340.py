while True:
    a, b = map(int, input().split())
    if a == b == 0: break
    print(min(a*30 + b*40, a*35 + b*30, a*40 + b*20))