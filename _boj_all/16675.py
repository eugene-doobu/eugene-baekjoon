ML, MR, TL, TR = input().split()
ok = False
if ML == MR:
    if ML == "R" and (TL == "P" or TR =="P"):
        ok = True
        print("TK")
    if ML == "S" and (TL == "R" or TR =="R"):
        ok = True
        print("TK")
    if ML == "P" and (TL == "S" or TR =="S"):
        ok = True
        print("TK")
if TL == TR:
    if TL == "R" and (ML == "P" or MR =="P"):
        ok = True
        print("MS")
    if TL == "S" and (ML == "R" or MR =="R"):
        ok = True
        print("MS")
    if TL == "P" and (ML == "S" or MR =="S"):
        ok = True
        print("MS")
if not ok:
    print("?")