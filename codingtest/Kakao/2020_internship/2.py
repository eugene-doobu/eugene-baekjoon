from itertools import permutations
from collections import deque

def solution(expression):
    numlst, exLst, rst = [], [], []
    lastExIdx = 0
    for idx, c in enumerate(expression):
        if c in ['+', '*', '-']:
            exLst.append(c)
            numlst.append(int(expression[lastExIdx:idx]))
            lastExIdx=idx+1
    numlst.append(int(expression[lastExIdx:]))

    exPer = permutations(set(exLst))
    for t in exPer:
        currNums, currExs = deque(numlst), deque(exLst)
        for ex in t:
            numsStk, exsStk = [], []
            numsStk.append(currNums.popleft())
            while currExs:
                tmp = currExs.popleft()
                if tmp == ex:
                    if ex == '+':
                        numsStk.append(numsStk.pop() + currNums.popleft())
                    if ex == '-':
                        numsStk.append(numsStk.pop() - currNums.popleft())
                    if ex == '*':
                        numsStk.append(numsStk.pop() * currNums.popleft())
                else:
                    numsStk.append(currNums.popleft())
                    exsStk.append(tmp)
            currNums = deque(numsStk)
            currExs  = deque(exsStk)
        rst.append(numsStk.pop())
    return max(set(map(abs, rst)))