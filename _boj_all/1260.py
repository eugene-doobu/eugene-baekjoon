from collections import deque

def DFS(v):
  visited[v] = True
  print(v , end=' ')
  for i in graph[v]:
    if not visited[i]:
      DFS(i)

def BFS(v):
  queue = deque([v])
  visited[v] = True
  while queue:
    verti = queue.popleft()
    print(verti, end=' ')
    for i in graph[verti]:
      if not visited[i]:
        queue.append(i)
        visited[i] = True

# init
vertices, edges, start = map(int, input().split())
graph =[[]]
visited = [False] * (vertices +1)

for i in range(vertices):
  graph.append([])
for j in range(edges):
  to, end = map(int, input().split())
  graph[to].append(end)
  graph[end].append(to)
for i in range(vertices):
  graph[i+1].sort()

DFS(start)
visited = [False] * (vertices +1)
print()

BFS(start)
