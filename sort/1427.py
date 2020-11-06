n = input()
n2 = []

for i in n:
  n2.append(int(i))
n2.sort(reverse = True)

for j in n2:
  print(j,end="")
print()
