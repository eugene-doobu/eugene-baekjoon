n = input()
s = len(n)*'1'
if int(n) >= int(s): print(len(n))
elif n=='0': print(1)
else: print(len(n)-1)