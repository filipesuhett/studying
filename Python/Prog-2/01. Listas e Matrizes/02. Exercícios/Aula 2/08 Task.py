def fibonacci(a):
    cont = 0
    l = [1,1]
    cont1 = 1
    
    if a > 0:    
        while cont < a-2:
            soma = 0
            soma = l[cont] + l[cont1]
            l.append(soma)
            cont += 1
            cont1 += 1
            return l
    else:
        return []