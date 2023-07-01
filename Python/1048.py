sala = float(input())

if sala <= 400:
    novo_salario = sala + sala * 0.15
    reajuste_ganho = sala * 0.15
    percentual = 15
elif sala > 400 and sala <= 800:
    novo_salario = sala + sala * 0.12
    reajuste_ganho = sala * 0.12
    percentual = 12
elif sala > 800 and sala <= 1200:
    novo_salario = sala + sala * 0.10
    reajuste_ganho = sala * 0.10
    percentual = 10
elif sala > 1200 and sala <= 2000:
    novo_salario = sala + sala * 0.07
    reajuste_ganho = sala * 0.07
    percentual = 7
else:
    novo_salario = sala + sala * 0.04
    reajuste_ganho = sala * 0.04
    percentual = 4

print(f"Novo salario: {novo_salario:.2f}")
print(f"Reajuste ganho: {reajuste_ganho:.2f}")
print(f"Em percentual: {percentual} %")
