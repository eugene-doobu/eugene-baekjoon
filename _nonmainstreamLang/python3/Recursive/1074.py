def find(n, r, c, v):
    if n > 2:
        po = (n//2) ** 2
        if 0 <= r < n//2 and 0 <= c < n//2:
            return find(n//2, r, c, v)
        if 0 <= r < n//2 and n//2 <= c < n:
            return find(n//2, r, c-n//2, v + po)
        if n//2 <= r < n and 0 <= c < n//2:
            return find(n//2, r-n//2, c, v + po * 2)
        if n//2 <= r < n and n//2 <= c < n:
            return find(n//2, r-n//2, c-n//2, v + po * 3)
    else:
        if c == 1 : v += 1
        if r == 1 : v += 2
        return v

n, r, c = list(map(int, input().split(' ')))
print(find(2 ** n, r, c, 0))
