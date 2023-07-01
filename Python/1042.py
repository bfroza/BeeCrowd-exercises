
num = input().split()

lista = [int(i) for i in num]
lista_ordenada = sorted(lista)

for i in lista_ordenada:
    print(i)
print()
for i in lista:
    print(i)