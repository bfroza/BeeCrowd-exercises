horainicial = int(input())
minutoinicial = int(input())
horafinal = int(input())
minutofinal = int(input())

if horainicial == horafinal and minutofinal < minutoinicial:
    difh = (horafinal - horainicial + 24) + ((minutofinal - minutoinicial + 60) // 60 - 1)
    difm = (minutofinal - minutoinicial + 60) % 60
elif horainicial == horafinal and minutoinicial == minutofinal:
    difh = (horafinal - horainicial + 24) + ((minutofinal - minutoinicial + 60) // 60 - 1)
    difm = (minutofinal - minutoinicial + 60) % 60
else:
    difh = (horafinal - horainicial + 24) % 24 + ((minutofinal - minutoinicial + 60) // 60 - 1)
    difm = (minutofinal - minutoinicial + 60) % 60

print("O JOGO DUROU", difh, "HORA(S) E", difm, "MINUTO(S)")
