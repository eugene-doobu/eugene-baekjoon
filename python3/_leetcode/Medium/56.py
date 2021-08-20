class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(reverse=True)
        arr = []
        arr.append(intervals.pop())
        while intervals:
            isChanged = False
            tmp = intervals.pop()
            for el in range(len(arr)):
                if arr[el][0] <= tmp[0] <= arr[el][1]:
                    isChanged = True
                    if arr[el][1] <= tmp[1]:
                        arr[el][1] = tmp[1]
                    break
            if not isChanged:
                arr.append(tmp)
        return arr
        