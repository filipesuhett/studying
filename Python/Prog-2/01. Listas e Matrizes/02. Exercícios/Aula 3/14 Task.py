def sal(x):
    f = []
    s = []
    cont = 0

    for i in range(x):
        f.append(input(' '))
        s.append(int(input(' ')))
    while cont < x:
        if sum(s)/x < s[cont]:
            print(f[cont], end=" ")
        cont += 1