val = input().split()
x = float(val[0])
y= float(val[1])
if(x > 0 and y >0):
    print("Q1")
elif(x<0 and y>0):
    print("Q2")
elif(x<0 and y<0):
    print("Q3")
elif(x>0 and y<0):
    print("Q4")
    
else:
    if(x == 0 and y == 0):
        print("Origem")
    elif(x == 0):
        print("Eixo Y")
    elif(y==0):
        print("Eixo X")
