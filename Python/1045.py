import math

A, B, C = map(float, input().split())
a = A
b = B
c = C

if B > A:
    A = b
    B = a

if C > A:
    C = A
    A = c

if A >= (B + C):
    print("NAO FORMA TRIANGULO")
else:
    if math.pow(A, 2) == math.pow(B, 2) + math.pow(C, 2):
        print("TRIANGULO RETANGULO")
    elif math.pow(A, 2) > math.pow(B, 2) + math.pow(C, 2):
        print("TRIANGULO OBTUSANGULO")
    elif math.pow(A, 2) < math.pow(B, 2) + math.pow(C, 2):
        print("TRIANGULO ACUTANGULO")

    if A == B and B == C:
        print("TRIANGULO EQUILATERO")
    elif A == B or A == C or B == C:
        print("TRIANGULO ISOSCELES")
