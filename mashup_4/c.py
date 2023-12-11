n = int(input())
 
for i in range(n):
    
    lista = []
    size = int(input())
 
    elementos = list(map(int, input().split()))
 
    resultado = elementos[0]
    
    for k in range(1, size):
        resultado &= elementos[k]
 
    print(resultado)