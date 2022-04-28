n = int(input())
_in = input()
rst = ""
for i in range(len(_in)):
    if i%n == 0:
        rst+=_in[i]
print(rst)