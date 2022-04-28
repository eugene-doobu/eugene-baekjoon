s = input()
tmp = ""
for c in s:
  tmp += c

isPalindrome = True

for i in range(int(len(tmp)/2)):
  if tmp[i] != tmp[len(tmp)-i-1]:
    isPalindrome = False

if isPalindrome:
  print("true")
else:
  print("false")