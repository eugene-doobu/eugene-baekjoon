def merge(arr):
    if len(arr) <= 1:
        return arr
    mid = len(arr)//2
    left = merge(arr[:mid])
    right = merge(arr[mid:])
    i, j, k = 0, 0, 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1
        k += 1
    if i == len(left):
        while j < len(right):
            arr[k] = right[j]
            j += 1
            k += 1
    elif j == len(right):
        while i < len(left):
            arr[k] = left[i]
            i += 1
            k += 1
    return arr

n, k = map(int, input().split())
arr = list(map(int, input().split()))
arr = merge(arr)
print(arr[k-1])