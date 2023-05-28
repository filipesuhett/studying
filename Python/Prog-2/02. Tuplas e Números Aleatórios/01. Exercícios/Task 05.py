def copa(l):
    sum = 0

    for (_, pontos) in l:
        sum += pontos

    return 3*len(l)-sum