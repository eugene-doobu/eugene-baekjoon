h, m = map(int, input().split())
m += int(input())
if m >= 60:
    h += m//60
    m %= 60
if h >= 24:
    h %= 24
print(h, m)