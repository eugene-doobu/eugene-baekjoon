for i in range(int(input())):
    a, b = map(int, input().split())
    a %= 10
    if b == 0:
        print(1)
        continue
    if a == 1 or a == 5 or a == 6:
        b = 1
    elif a == 2 or a == 3 or a == 7 or a == 8:
        b %= 4
        if b == 0:
            b=4
    elif a == 4 or a == 9:
        b %= 2
        if b == 0:
            b=2
    else:
        print(10)
        continue
    print(int(a**b)%10)
