def maximo(l):
    b = 0
    a = -1000
    
    while b < len(l):
        if l[b] > a:
            a = l[b]
        b += 1

    return a