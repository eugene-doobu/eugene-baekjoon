x, y, end = map(int, input().split())

for i in range(1, end+1):
    print('Fizz' * (i % x == 0) + 'Buzz' * (i % y == 0) or i)