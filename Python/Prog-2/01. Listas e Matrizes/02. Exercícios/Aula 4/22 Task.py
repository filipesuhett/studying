def deter(m):
    a = 0
    b = 1
    c = 2
    x = 0
    y = 0
    
    for i in range(len(m)):
        x += m[0][a] * m[1][b] * m[2][c]
        a += 1
        b += 1
        c += 1
        if b > 2:
            b = 0
        if c > 2:
            c = 0     
    a = 0
    for i in range(len(m)):
        y += m[0][c] * m[1][b] * m[2][a]
        a -= 1
        b -= 1
        c -= 1
        if b < 0:
            b = 2
        if c < 0:
            c = 2   
    
    return y-(x)