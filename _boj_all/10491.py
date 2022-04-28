import re
try:
    while True:
        print("yes" if re.search("problem", input().lower()) else "no")
except EOFError:
    pass