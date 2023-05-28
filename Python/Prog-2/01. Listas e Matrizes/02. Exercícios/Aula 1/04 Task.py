'''Dado um n ́umero n, fa ̧ca uma fun ̧c ̃ao que leia n n ́umeros inteiros, e retorne uma lista com esses n ́umeros'''

def ocorrencias(l,a):
    cont = 0
    x = 0
    
    while len(l) > x:
        if a == l[x]:
            cont += 1
        x += 1

    return cont