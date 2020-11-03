import math 
n=int(input())
m=int(input())
pos=list(map(int,input().split()))
start=pos[0];
end=n-pos[len(pos)-1]
maxn=0
for i in range(len(pos)-1):
  maxn=max(maxn,(pos[i+1]-pos[i])/2)
result=math.ceil(max(start,end,maxn))
print(result)