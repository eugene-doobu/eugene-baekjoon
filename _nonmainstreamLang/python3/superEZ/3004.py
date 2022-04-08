N, rst, isOdd, currAdd = int(input()), 2, True, 2
for i in range(2, N+1):
    if isOdd: 
        rst += currAdd
        isOdd = False
    else:
        rst += currAdd
        currAdd += 1
        isOdd = True
print(rst)