'''Regressiva: Faça uma função que crie e retorne uma lista com todos os números pares de 1 a 100, por ́em na ordem regressiva.'''

def regressiva():
    cont = 100
    l = []
    
    while cont <= 100:
        if cont%2 == 0:
            l.append(cont)
        cont -= 1   

    return l