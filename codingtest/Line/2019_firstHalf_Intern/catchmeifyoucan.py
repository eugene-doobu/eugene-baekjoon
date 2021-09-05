from collections import deque
def solution(C, B):
    incre, time = 1, 0
    q = deque()

    q.append([C, B, incre, time])
    while q:
        cony, brown, _incre, _time = q.popleft()
        #print(cony, brown, _incre, _time)
        if cony == brown:
            return _time
        if cony >= 200000:
            break
        cony += _incre
        _incre = _incre + 1
        _time += 1
        q.append([cony, brown-1, _incre, _time])
        q.append([cony, brown+1, _incre, _time])
        q.append([cony, brown*2, _incre, _time])
    return -1
 
print(solution(6, 3))