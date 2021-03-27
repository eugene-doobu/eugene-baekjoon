n = int(input())

#for i in range(1, n):
#  print(" " * (n - i), end="")
#  print("*" * (((i-1)*2)+1))
print("*" * (((n-1)*2)+1))
for i in range(n-1, 0, -1):
  print(" " * (n - i), end="")
  print("*" * (((i-1)*2)+1))