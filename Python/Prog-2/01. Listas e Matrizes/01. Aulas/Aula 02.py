'''Ordenar uma Lista sem repetir os números'''

def repetir():
  r = []
  l = [2, 4, 6, 2, 9, 8, 9, 10, 3, 3, 4, 6, 10]
  i = 0

  for i in l:
    if i not in r:
      r.append(i)

  return r 

  
if __name__ == "__repetir__":
  repetir()