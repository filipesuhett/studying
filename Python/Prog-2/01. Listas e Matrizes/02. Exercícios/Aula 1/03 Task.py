'''Dado um n ́umero n, fa ̧ca uma fun ̧c ̃ao que leia n n ́umeros inteiros, e retorne uma lista com esses n ́umeros'''

def Leitura():
    a = int(input('how many numbers will you enter? '))
    cont = 0
    l = []
    
    while cont < a:
        x = int(input('Insert the number: '))
        l.append(x)
        cont += 1

    return l