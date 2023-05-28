def subl(x, y, l):
    cont = 0
    sl = []
    x1 = 0
    y1 = 0

    while cont < len(l):
        if x == l[cont]:
            x1 = cont
        if y == l[cont]:
            y1 = cont
        cont += 1    
    cont = 0
    while cont < y1-x1-1:
        sl.append(l[x])
        x += 1
        cont += 1
    return sl