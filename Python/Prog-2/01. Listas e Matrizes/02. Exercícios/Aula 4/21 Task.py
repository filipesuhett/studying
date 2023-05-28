def m_iden(mf):
    mi = []
    
    for j in range(len(mf)):
        l = []
        for i in range(len(mf)):
            if i == j:
                l.append(1)
            else: 
                l.append(0)    
        mi.append(l)
    if mi == mf:
        return True
    else:
        return False