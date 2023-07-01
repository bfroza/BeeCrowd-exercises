tempo = input().split()

x1 = int(tempo[0])
x2 = int(tempo[1])

if x1 == x2:
    duracao = 24
elif x1 < x2:
    duracao = x2 - x1
else:
    duracao = (24 - x1) + x2

print(f'O JOGO DUROU {duracao} HORA(S)')
