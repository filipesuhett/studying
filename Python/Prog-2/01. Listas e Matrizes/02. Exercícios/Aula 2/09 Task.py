def ord_abs(ord, abs):
    cont = 0
    conta = 0
    conto = 0
    a = 0
    b = 1

    while len(ord) > cont:
        if abs[cont] % 2 == 0:
            a += abs[cont]
            conta += 1
        if not ord[cont] % 2 == 0:
            b *= ord[cont]
            conto += 1    
        cont += 1

    if conta >= conto:
        return a
    else:
        return b