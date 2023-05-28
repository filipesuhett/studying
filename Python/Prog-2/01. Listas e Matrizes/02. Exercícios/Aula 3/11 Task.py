def main(x, y):
    l = []
    cont = 0
    dia = 0
    
    while x > cont:
        l.append(y)
        cont += 1
    cont = 0
    while x > cont:
        if l[cont] >= 60:
            dia += 1
        cont += 1

    print(f'Class grade average is {sum(l)/x:.1f}\nNumber of students with a grade greater than or equal to 60: {dia}')