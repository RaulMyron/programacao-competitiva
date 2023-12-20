a, b = [int(x) for x in input().split()]

lista = dict([int(x) for x in input().split()])


saida = ''

for elemento in consultas:
    if elemento in lista:
        saida+= str(lista.index(elemento)+1)+" "
    else:
        saida+= '-1 '
        
print(saida.strip())

