n = int(input())
for i in range(n):
    if i != 0: print()
    x = int(input())
    print("#" * x)
    for j in range(x-2): 
        print("#"+ "J"*(x-2) +"#")
    if x != 1: print("#" * x)