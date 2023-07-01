val = input().split()
A = int(val[0])
B = int(val[1])
C = int(val[2])
D = int(val[3])

var = ("Valores aceitos"  if  B > C and D > A and C+D > A+B and C >= 0 and D >= 0 and A % 2 == 0  else  "Valores nao aceitos")
print(var)