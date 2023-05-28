def handebol(n,m):
    cont = 0
    qual = 0
        
    while n > cont:  
        part = []
        cont1 = 0
        while m > cont1:
            pa = int(input(f'Jogador {cont+1} | Partida {cont1+1} | Gols: '))
            cont1 += 1
            part.append(pa)  
        if not 0 in part:
            qual += 1
        cont += 1    
    return qual