def multiplos(n, k):
    cont = 0
    l = []

    while cont/n < k:
        cont += n
        l.append(cont)

    return l