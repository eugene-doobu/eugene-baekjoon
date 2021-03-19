import re
haveFBI = False
for i in range(1,6):
    qw = re.search("(FBI)+", input())
    if qw:
        print(i, end = ' ')
        haveFBI = True
if not haveFBI:
    print("HE GOT AWAY!")