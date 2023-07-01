val = float(input())

if(val <= 25 and val >=0):
    print("Intervalo [0,25]")
elif(val <=50 and val > 25):
     print("Intervalo (25,50]")
elif(val <=75 and val > 50):
    print("Intervalo (50,75]")
elif(val <= 100 and val > 75):
    print("Intervalo (75,100]")
else:
    print("Fora de intervalo")