def compara(valorA, valorB):
    if valorA[0] != valorB[0]:
        return valorA[0] > valorB[0]
    elif valorA[1] != valorB[1]:
        return valorA[1] < valorB[1]
    elif valorA[2] != valorB[2]:
        return valorA[2] < valorB[2]
    elif valorA[5] != valorB[5]:
        return valorA[5] < valorB[5]
    elif valorA[7] != valorB[7]:
        return valorA[7] > valorB[7]
    return False