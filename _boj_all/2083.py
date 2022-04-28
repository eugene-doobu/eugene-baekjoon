while True:
  i = input()
  if i == "# 0 0": break
  vals = i.split()
  if int(vals[1]) > 17 or int(vals[2]) >=80:
    print(vals[0], "Senior")
  else:
    print(vals[0], "Junior")