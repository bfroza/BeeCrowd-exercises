notas = input().split()

n1 = float(notas[0])
n2 = float(notas[1])
n3 = float(notas[2])
n4 = float(notas[3])

media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10

print(f'Media: {media:.1f}')

if media >= 5.0 and media <= 6.9:
    print('Aluno em exame.')
    recuperacao = float(input())
    medRep = (recuperacao + media) / 2
    
    print(f'Nota do exame: {recuperacao:.1f}')

    if medRep >= 5.0:
        print('Aluno aprovado.')
        print(f'Media final: {medRep:.1f}')
    else:
        print('Aluno reprovado.')

elif media >= 7.0:
    print('Aluno aprovado.')

else:
    print('Aluno reprovado.')
