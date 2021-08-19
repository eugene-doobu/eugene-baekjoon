stk, sum = [], 0
n = int(input())
for _ in range(n):
    val = int(input())
    if val != 0:
        stk.append(val)
    elif val ==0 and stk:
        stk.pop()
while stk:
    sum += stk.pop()
print(sum)
