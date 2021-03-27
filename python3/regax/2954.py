import re
def func(m):
    return m.group()[0]
print(re.sub("(a|e|i|o|u).(a|e|i|o|u)", func, input()))