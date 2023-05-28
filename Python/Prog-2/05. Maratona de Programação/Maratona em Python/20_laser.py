def laser(t,l):
    alt = [t[0]]*t[1]
    cont  = 0
    while alt != l:
        print(alt)
        cont1 = 0
        aux = 0
        while cont1 < t[1]:
            if alt[cont1] > l[cont1]:
               alt[cont1] = alt[cont1] - 1
               aux += 1
            elif aux > 0:
                break
            cont1 += 1
        cont += 1
    return cont  
    