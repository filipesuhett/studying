def erro(x,y):
    aux = ''
    
    for i in y:
        if i != x:
            aux += i
        if aux != '':
            if aux[0] == '0':
                aux = ''
        
    if aux == '':
        return '0'
        
    return aux 