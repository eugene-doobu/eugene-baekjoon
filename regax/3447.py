import re
try:
    while True:
        s = input()
        while re.search("BUG", s):
            s = re.sub("BUG", "", s)
        print(s)
except EOFError:
    pass