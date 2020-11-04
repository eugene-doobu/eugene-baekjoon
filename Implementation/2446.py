n = int(input())

for i in range(n-1, 0, -1):
  print(" " * ((n-1) - i), end="")
  print("*" * i * 2,end="")
  print("*")

print(" " * (n-1), end="")
print("*")

for i in range(1, n):
  print(" " * ((n-1) - i), end="")
  print("*" * i * 2,end="")
  print("*")