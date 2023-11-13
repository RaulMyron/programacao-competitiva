from collections import deque 

n, m = map(int, input().split())

caixas = deque()
clientes = deque()
caixas_ocupados = []

caixas = deque(map(int, input().split()))
clientes = deque(map(int, input().split()))

#print(caixas)
#print(clientes)

tempo_total = 0

tempo = 0

while len(clientes)!=0 or len(caixas)!=0 or len(caixas_ocupados)!=0:
    
    if len(clientes) == 0 and len(caixas_ocupados) == 0:
        break
        
    if((len(caixas_ocupados)<n and len(clientes)!=0) and len(caixas)!=0): #se tem caixa livre
        
        for i in range(len(caixas)): #para cada caixa livre
            print(clientes, caixas, caixas_ocupados)
            caixa_atual = caixas[0]
            tempo_cliente = clientes.pop()
            tempo_caixa = caixas.pop()
            tempo_de_espera = tempo_cliente * tempo_caixa
            tempo_total+=tempo_de_espera
            caixas_ocupados.append([0,tempo_de_espera, tempo_caixa])
    
    for i in range(len(caixas_ocupados)):
        print(i)
        print(caixas_ocupados)
        print(len(caixas_ocupados))
        
        if(caixas_ocupados[i-1][0]==caixas_ocupados[i-1][1]):
            caixas.append(caixas_ocupados[i-1][2])
            caixas_ocupados.pop()
        else:
            caixas_ocupados[i-1][0]+=1
    
    tempo+=1
    #tempo_total+=1

print(tempo_total)