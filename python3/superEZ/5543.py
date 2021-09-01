burger, water =[], []
for _ in range(3):
    burger.append(int(input()))
for _ in range(2):
    water.append(int(input()))
print(min(burger)+min(water)-50)