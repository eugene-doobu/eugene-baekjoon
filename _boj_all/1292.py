limit = 1
count = 0
sumResult = 0
a, b = input().split()
a = int(a)
b = int(b)

while b > count:
  #���� �� ���ϱ�
  for i in range(limit):
    if b <= count:
      break
    count +=1
    if count >= a:
      sumResult += limit
  limit +=1

print(sumResult)