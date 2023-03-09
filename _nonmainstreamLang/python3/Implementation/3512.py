d = {}
n, c = map(int, input().split(' '))
ts = 0
d["bedroom"] = 0
d["balcony"] = 0

for _ in range(n):
    s, t = input().split()
    s = float(s)
    if t in d:
        d[t] += s
    else:
        d[t] = s
    ts += s
print(int(ts))
print(int(d["bedroom"]))
print(c * (ts - d["balcony"]/2))
