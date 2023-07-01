num = input().split()

A = float(num[0])
B = float(num[1])
C = float(num[2])
   
if (A>=B +C or B>= A+C or C>=B+A):
    print(f'Area = {((A+B)*C)/2:.1f}')
else: 
    print(f'Perimetro = {A+B+C:.1f}')
   

 