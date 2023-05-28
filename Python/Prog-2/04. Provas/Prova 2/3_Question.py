def bobo(l):
    maior = 0
    
    for i in l:
        if i > maior:
            maior = i
            
    if maior == l[0]:
        return 'S'
    else:
        return 'N'        

def valor1():
    n = int(input())
    cont = 0
    l = []
    
    while cont < n:
        v = int(input(''))
        l.append(v)
        cont += 1
    print(bobo(l))