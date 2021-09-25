keyset, dic, maxarr, maxval = set(), {}, [], 0
inval = input().upper()
for c in inval:
    keyset.add(c)
    if dic.get(c):
        dic[c] += 1
    else:
        dic[c] = 1
for el in keyset:
    preMaxVal = maxval
    maxval = max(maxval, dic[el])
    if dic[el] == maxval and dic[el] != preMaxVal:
        maxarr = []
    if dic[el] == maxval:
        maxarr.append(el)
if len(maxarr) == 1:
    print(maxarr[0])
else:
    print('?')
