def troca(l1, l2):
    lb = []
    la = []
    clear = []

    if l1 == l2:
        print(0)
    else:
        for i in l1:
            for j in l2:    
                if not i == j:
                    if lb.count(i) == 0:
                        lb.append(i)
                    if la.count(j) == 0:
                        la.append(j)
                else:
                    if clear.count(i) == 0:
                        clear.append(i)
        if len(clear) > 0:
            for b in range(len(clear)):
                la.remove(clear[b])
                lb.remove(clear[b])
        if len(la) > len(lb):
            print(len(lb))
        else:
            print(len(la))