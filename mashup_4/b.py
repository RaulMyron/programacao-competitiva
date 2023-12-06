
n, m = map(int, input().split())

matriz = []

#matriz.append(['.']*(m+2))

for i in range(n):
    #entrada = '.'  + input() + '.'
    entrada = input()
    entrada = [b for b in entrada]
    matriz.append(entrada)

#matriz.append(['.']*(m+2))

verificador = [[0 for i in range(m)] for j in range(n)] #creating a multidimensional list with no adress

colunas = 0
linhas = 0

for y in range(n):
    #print(matriz[y])

    if not matriz[y].count('S'):
        #print('nao tem s')
        for x in range(m):
            verificador[y][x] = 1


#verificar a coluna
verificador_bool = 0

for x in range(m):
    for y in range(n): 
        #print(y, x, matriz[y][x])

        if matriz[y][x] == 'S':
            verificador_bool-=1
            break
    
    #print('linha ', y, "verificada", verificador_bool)

    if verificador_bool==0:
        for z in range(n):
            verificador[z][x] = 1
    verificador_bool = 0



#print(verificador)

print(sum(x.count(1) for x in verificador))

# 0 0
# 0 1
# 0 2 

# 1 0
# 1 1
# 1 2

'''

for y in range(1, m):
    print(matriz[y][1:-1])
    if not matriz[y][1:-2].count('S'):
        print('não tem s')
    else:
        print('tem s')
    #for x in range(1,n+1):

        #if not matriz[y].count('S'):
            #print(matriz[y])
            #print('mais uma linha')
        #print(matriz[x].count('S'))
        #print(matriz[x][y], end='')
    #print("\n")

'''
