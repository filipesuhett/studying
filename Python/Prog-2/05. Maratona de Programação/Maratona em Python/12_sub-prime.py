def sub(l):
    cont = 1
    while cont < len(l):
        x = l[cont][0]-1
        y = l[cont][1]-1
        z = l[cont][2]
        l[0][x] = l[0][x]-z
        l[0][y] = l[0][y]+z
        cont+=1  
    for j in l[0]:
        if j < 0:
            return 'N'    
    return 'S'