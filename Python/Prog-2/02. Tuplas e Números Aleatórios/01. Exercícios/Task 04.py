def voo1(a, b, l):
  for (num,com,local) in l:
        if local[0] == a and local[len(local) - 1] == b:
            print(num, com)

def voo2(a, b, l):
    cont = 0

    for (_,_,local) in l:
        if local[0] == a:
            for i in range(len(local)-1):
                if local[i] == b:
                    cont += 1
    print(cont)

def voo3(a, b, l):
    for (_,_,local) in l:
        for i in range(len(local)-1):
            if local[i] == a and local[i+1] == b:
                return True        
    return False
