def main(l1, l2):
    cont = 0
    num = 0

    while cont < len(l1):
        if l1[cont] == l2[cont]:
            num += 1
        cont +=  1    

    return num               