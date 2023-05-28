def coffe(a, b, c):
    a1 = 2*b + 4*c
    b1 = 2*a + 2*c
    c1 = 4*a + 2*b
    
    if a1 <= b1 and a1 <= c1:
        print(a1)
    elif b1 <= c1:
        print(b1)
    else:
        print(c1)