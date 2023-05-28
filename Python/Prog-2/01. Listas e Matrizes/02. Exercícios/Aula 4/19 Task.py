def s_matrix(a, b):
    s = [[a[x][y] + b[x][y]  
    
    for x in range (len(a[0]))] 
        for y in range(len(a))]

    return s