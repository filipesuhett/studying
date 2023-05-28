'''Verficar se existe um número dentro de uma lista'''

def Verificar():
  x = int(input("Write the number: "))
  l = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
  i = 0

  while i < len(l):
    if l[i] == x:
      return True
      
    i += 1
  return False

  
if __name__ == "__Verificar__":
  Verificar()