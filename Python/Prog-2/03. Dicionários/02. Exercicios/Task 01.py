def check(dic):
    dicm = {}
    for name in dic:
        if dic[name][0] >= 18:
            dicm[name] = dic[name]

    return dicm

def main():
    dic = {}

    while len(dic) < 10:
        name = input('Digite o seu Nome: ')
        age = int(input('Digite a sua Idade: '))
        cell = input('Digite seu numero: ')

        dic[name] = (age, cell)

    print(check(dic))

if __name__ == '__main__':
    main()