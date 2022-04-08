def solution(participant, completion):
    filter = {}
    for man in participant:
        filter[man] = 0
    for man in participant:
        filter[man] += 1
    for man in completion:
        filter[man] -= 1
    for man in set(participant):
        if filter[man] >= 1:
            return man
    return None