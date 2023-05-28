def tele(c,a):
    cont = 0
    bol  = False
    while bol == False:
        a = a - c + 1
        cont += 1  
        if a <= 0:
            return cont