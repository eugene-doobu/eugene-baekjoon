n, lst, rst = int(input()), list(map(int, input().split())), 0
for i in lst: 
    if i == n: rst+=1
print(rst)