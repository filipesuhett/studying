def game(l):
    maior = 100
    soma = 100
    
    for i in l:
        soma = soma + i
        if soma > maior:
            maior = soma
    
    return maior

def valor1():
    n = int(input())
    cont = 0
    l = []
    
    while cont < n:
        v = int(input(''))
        l.append(v)
        cont += 1
    print(game(l))