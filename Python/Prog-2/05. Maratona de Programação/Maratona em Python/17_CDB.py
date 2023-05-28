def CDB(t1,t2):
    vare = 0
    for i in range(t1[0]):
        cont = 0
        for j in range(t1[1]):
            if t2[j][i] == 1:
                cont += 1
            elif cont < t1[2]:
                cont = 0
        if cont >= t1[2]:
            vare += 1
    return vare             