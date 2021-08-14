class Solution(object):
    def findJudge(self, n, trust):
        judge = {}
        notJudges = set()
        judgeFilter = []
        for i in range(1, n+1):
            judge[i] = []
            judgeFilter.append(i)

        for u, v in trust:
            judge[v].append(u)
            notJudges.add(u)

        for notJudge in notJudges:
            judgeFilter.remove(notJudge)

        candidates = []
        for candidate in judgeFilter:
            if len(judge[candidate]) == n-1:
                candidates.append(candidate)
        if len(candidates) == 1:
            return candidates[0]
        else:
            return -1
        