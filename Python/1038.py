itens = input().split()

cod = float(itens[0])
val = float(itens[1])

if(cod == 1):
    print("Total: R$ %.2f" % (val*4.0))
elif(cod == 2):
    print("Total: R$ %.2f" % (val*4.5))
elif(cod == 3):
    print("Total: R$ %.2f" % (val*5.0))   
elif(cod == 4):
    print("Total: R$ %.2f" % (val*2.0))
else:
    print("Total: R$ %.2f"  %(val*1.5))