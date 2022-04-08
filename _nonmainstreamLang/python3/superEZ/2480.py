a, b, c = map(int,input().split())
rst = 0
if a == b == c:
    rst += 10000 + a*1000
elif a == b:
    rst += 1000 + a*100
elif a == c:
    rst += 1000 + a*100
elif c == b:
    rst += 1000 + c*100
else:
    rst += max(a,b,c)*100
print(rst)