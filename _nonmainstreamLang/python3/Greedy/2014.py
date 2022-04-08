import heapq
from copy import deepcopy
k, n = map(int, input().split())
lst = list(map(int, input().split()))
jig, idx, _set = deepcopy(lst), 0, set()
heapq.heapify(jig)

while idx < n:
    curr = heapq.heappop(jig)
    if curr in _set:
        continue
    _set.add(curr)
    idx+=1
    for el in lst:
        heapq.heappush(jig, el * curr)
print(curr)