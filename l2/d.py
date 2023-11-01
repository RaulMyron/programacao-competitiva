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

while len(clientes)!=0 or len(caixas)!=0 or len(caixas_ocupados)!=0:
    
    if len(clientes) == 0 and len(caixas_ocupados) == 0:
        break
        
    print('caixas usados', caixas)
    print('caixas ocupado', caixas_ocupados)
    print('clientes em esperas', clientes)
        
    if(len(caixas_ocupados)<n and len(caixas)!=0): #se tem caixa livre
        
        for i in range(len(caixas)): #para cada caixa livre
            
            print("len de caixas:", len(caixas), "contador", i, caixas)
            
            caixa_atual = caixas[i]
            tempo_cliente = clientes.pop()
            tempo_caixa = caixas.pop()
            tempo_de_espera = tempo_cliente * tempo_caixa
            tempo_total+=tempo_de_espera
            #print(tempo_de_espera, caixas, clientes)
            caixas_ocupados.append([0,tempo_de_espera, tempo_caixa])
            
    #print(caixas_ocupados)
    #exit()
    
    for i in range(len(caixas_ocupados)):
        if(caixas_ocupados[i][0]==caixas_ocupados[i][1]):
            caixas.append(caixas_ocupados[i][2])
            caixas_ocupados.pop(i)
        else:
            caixas_ocupados[i][0]+=1
    
    #tempo_total+=1

print(tempo_total)