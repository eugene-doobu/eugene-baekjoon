n, m = map(int, input().split())
dict = {}
teams = []
for _ in range(n):
    team = input()
    teams.append(team)
    dict[team] = []
    members = int(input())
    for _ in range(members):
        dict[team].append(input())
for _ in range(m):
    quiz = input()
    isMember = int(input())
    if isMember == 1:
        for team in teams:
            if quiz in dict[team]:
                print(team)
    elif isMember == 0:
        dict[quiz].sort()
        for teamMember in dict[quiz]:
            print(teamMember)