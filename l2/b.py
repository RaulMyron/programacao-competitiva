n, f, p = map(int, input().split())
carros = list(map(int, input().split()))

tempo = 0

contador = 1

while True:

    if(carros.count(0)==n):
        break
    
    if (contador%f == 0):
        if(carros[contador-1] <= p):
            
            carros[contador-1]=0
            tempo+=5
            
        elif(carros[contador-1] > p):
            
            tempo+=10 
            carros.append(carros[contador-1]-2)
            
    else:
        
        carros[contador-1]=0
        tempo+=1
        
    
    
    contador+=1
    
 
print(tempo)