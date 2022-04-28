inVal = int(input())
d = [0 for _ in range(1000001)]

d[0] = 1
d[1] = 1

for i in range(2, inVal+1):
  d[i] = d[i-1] + d[i-2]
  d[i] %= 15746

print(d[inVal])