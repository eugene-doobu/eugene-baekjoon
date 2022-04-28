dict={'A':3, 'B':2, 'C':1, 'D':2, 'E':4, 'F':3, 'G':1, 'H':3, 'I':1, 'J':1, 'K':3, 'L':1, 'M':3, 'N':2, 'O':1, 'P':2, 'Q':2, 'R':2, 'S':1, 'T':2, 'U':1, 'V':1, 'W':1, 'X':2, 'Y':2, 'Z':1}
map(int,input().split())
nn, mn = input().split()
i, lst = 0, []
while i < len(nn) or i <len(mn):
    if i < len(nn):
        lst.append(dict[nn[i]]) 
    if i < len(mn):
        lst.append(dict[mn[i]]) 
    i += 1
while len(lst) > 2:
    for idx in range(len(lst)-1):
        lst[idx] = (lst[idx] + lst[idx+1])%10
    lst.pop()
print(str(lst[0]*10+lst[-1])+'%')