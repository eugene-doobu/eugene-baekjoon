while True:
    a, b = map(int, input().split())
    if a == b == 0: break
    fac, mult = False, False
    if b % a == 0: fac = True
    if a % b == 0: mult = True
    if fac: print("factor")
    elif mult: print("multiple")
    else: print("neither")