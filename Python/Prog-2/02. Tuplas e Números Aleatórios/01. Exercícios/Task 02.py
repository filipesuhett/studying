def lucro(l):
    maior = 0
    menor = 0
    
    for i in l:
        if i[0]*1.25 <= i[1]:
            maior += 1
        if i[0]*1.20 > i[1]:
            menor += 1
            
    print (maior, menor)