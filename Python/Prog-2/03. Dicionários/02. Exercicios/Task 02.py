import os

def limpatela():
    if os.name == 'nt':
        os.system('cls')
    else:
        os.system('clear')

def cadas(agen):
    name = input('Digite o seu Nome: ')
    cell = input('Digite seu numero: ')
    agen[name] = (cell)
    
def pri(agen):
    for name in agen:
        print(f'Nome: {name}\t| Numero: {agen[name]}')
        
def main():
    menu = '''---------------------------------------------
    
              Menu
              1) Inserir novo contato
              2) Vizualizar contatos cadastrados
              3) Sair
              
              Qual operação deseja? '''
    agen = {}
    op = int(input(menu))

    while op != 3:
        limpatela()
        if op == 1:
            cadas(agen)
        elif op == 2:
            pri(agen)
        else:
            print('Operação Invalida. Tente novamente')
        op = int(input(menu))

if __name__ == '__main__':
    main()