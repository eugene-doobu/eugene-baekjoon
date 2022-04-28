from copy import deepcopy
n = int(input())
board = [list(map(int, input().split())) for i in range(n)]

def rotate90(b, n):
    nb = deepcopy(b)
    for i in range(n):
        for j in range(n):
            nb[j][n-i-1] = b[i][j]
    return nb

def convert(lst, n):
    new_list = [i for i in lst if i]
    for i in range(1, len(new_list)):
        if new_list[i-1] == new_list[i]:
            new_list[i-1] *= 2
            new_list[i] = 0
    new_list = [i for i in new_list if i]
    return new_list + [0] * (n-len(new_list))

def dfs(n, board, count):
    ret = max([max(i) for i in board])
    if count == 0:
        return ret
    for _ in range(4):
        x = [convert(i, n) for i in board]
        if x != board:
            ret = max(ret, dfs(n, x, count-1))
        board = rotate90(board, n)
    return ret

print(dfs(n, board, 5))