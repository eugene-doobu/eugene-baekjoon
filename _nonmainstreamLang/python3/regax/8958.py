import re

def hi(tmp):
    global rst
    num = tmp.span()[1] - tmp.span()[0]
    for i in range(1, num+1):
        rst += i
    return

for i in range(int(input())):
    rst = 0
    re.sub('O+', hi, input())
    print(rst)
