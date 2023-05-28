def temp(x, y):
    l = []
    cont = 0
    dia = 0
    
    while x > cont:
        l.append(y)
        cont += 1
    cont = 0
    while x > cont:
        if l[cont] < sum(l)/x:
            dia += 1
        cont += 1    

    print(f'The mean annual temperature is {sum(l)/x:.1f}\nNumber of days with temperature below average {dia}')