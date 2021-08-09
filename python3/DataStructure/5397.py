n = int(input())
for i in range(n):
    s = input()
    stk1, stk2 = [], []
    for c in s:
        if c.isalnum():
            stk1.append(c)
        elif c == '>' and stk2:
            stk1.append(stk2.pop())
        elif c == '<' and stk1:
            stk2.append(stk1.pop())
        elif c == '-' and stk1:
            stk1.pop()
    stk1.extend(reversed(stk2))
    print("".join(stk1))