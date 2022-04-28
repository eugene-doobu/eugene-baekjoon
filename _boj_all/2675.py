n = int(input())
num = []
text = []

for i in range(n):
  _num, _text = input().split()
  num.append(_num)
  text.append(_text)

for i in range(n):
  for j in text[i]:
    print(j * int(num[i]), end="")
  print("")