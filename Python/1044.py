X = input().split()

A = int(X[0])
B = int(X[1])

if A > B:
    if A % B == 0:
        print("Sao Multiplos")
    else:
        print("Nao sao Multiplos")
else:
    if B % A == 0:
        print("Sao Multiplos")
    else:
        print("Nao sao Multiplos")
