def fase1(l):
    cont = 0
    passaram = 0
    
    y = l[1]
    l.pop(0)
    l.pop(0)
    l.sort()
    l.reverse()
    
    while cont < len(l):
        if passaram < y:
            passaram += 1
            if passaram == y:
                aux = l[cont]
        elif aux == l[cont]:
            passaram += 1
        else:
            return passaram
        cont += 1
    return passaram      
        
def fase2(tup,l):
    cont = 0
    passaram = 0
    
    l.sort()
    l.reverse()
    
    while cont < len(l):
        if passaram < tup[1]:
            passaram += 1
            if passaram == tup[1]:
                aux = l[cont]
        elif aux == l[cont]:
            passaram += 1
        else:
            return passaram
        cont += 1
    return passaram                