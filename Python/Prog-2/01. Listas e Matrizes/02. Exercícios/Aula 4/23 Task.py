def trans(m):
    tm = []
    cont = 1
    
    for i in range(len(m)):
        l = []
        for j in range(len(m)):
            l.append(m[j][i])
        tm.append(l)
    for n in range(len(tm)):
        for q in range(len(tm)):
            if n == q:
                for k in range(len(tm)-cont):
                    tm[q][k+cont] = 0
                cont += 1    
    print(tm)