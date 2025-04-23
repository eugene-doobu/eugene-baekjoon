c = True
while c:
    a = int(input())
    if a == 0:
        c = False
        break
    if a % 42 == 0:
        print("PREMIADO")
    else:
        print("TENTE NOVAMENTE")