'''Fa ̧ca um procedimento que leia 10 n ́umeros digitados pelo usu ́ario, armazene a metade de cada um deles numa lista, e depois imprima esta lista.'''

def metade():
    cont = 0
    l = []
    
    while cont < 10:
        x = float(input('Insert the number: '))
        x = x/2
        l.append(x)
        cont += 1

    return l