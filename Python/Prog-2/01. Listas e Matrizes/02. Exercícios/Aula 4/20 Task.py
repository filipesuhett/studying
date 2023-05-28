def m_aluno():
    a = int(input('Numero de alunos: '))
    n = int(input('Numero de Notas: '))
    m = []
    ls = 0
    
    for j in range(a):
        l = []
        for i in range(n):
            l.append(int(input(f'Nota {i+1} do aluno {j+1}: ' )))
        m.append(l)   
            
    for b in range(len(m)):
        ls += sum(m[b])/n
        print(f'Aluno {b+1}: {sum(m[b])/n}')
        
    print(f'Média da turma: {ls/n}')