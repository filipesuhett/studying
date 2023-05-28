def kat(t,l):
    cont = 0
    
    while cont < len(l)-1:
        if l[cont+1]-l[cont] >= t[0]:
            return 'Y'
        cont += 1
    return 'N'

def valor():
    T = int(input(''))
    D = int(input(''))
    M = int(input(''))
    l = [0]
    cont = 0
    t = (T,D,M)
    while cont < M:
        v = int(input(''))
        l.append(v)
        cont += 1
    l.append(D)
    
    print(kat(t,l))