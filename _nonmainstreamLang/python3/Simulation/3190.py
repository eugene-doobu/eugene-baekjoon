from collections import deque
def solution(N, apples, moves):
    mat = [[0] * (N) for _ in range(N)]
    for r, c in apples:
        mat[r-1][c-1] = 1
    changes = {}
    for t, d in moves:
        changes[t] = d
    body = deque()
    body.append([0, 0])
    dy, dx = [0, 1, 0, -1], [1, 0, -1, 0]
    hy, hx = 0, 0
    time, d = 0, 0
    
    while True:
        time += 1
        hx += dx[d]
        hy += dy[d]
        if time in changes.keys():
            if changes[time] == 'D':
                d = (d+1)%4
            else:
                d = (d-1)%4
        if not (0 <= hx < N and 0 <= hy < N):
            break
        if [hy, hx] in body:
            break
        if mat[hy][hx] == 1:
            mat[hy][hx] = 0
            body.append([hy,hx])
        else:
            body.append([hy,hx])
            body.popleft()
    return time
 
N = int(input())
K = int(input())
apples = []
for _ in range(K):
    apples.append(tuple(map(int, input().split())))
L = int(input())
moves = []
for _ in range(L):
    t, d = tuple(input().split())
    moves.append((int(t), d))
print(solution(N, apples, moves))