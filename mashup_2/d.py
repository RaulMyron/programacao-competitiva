formigas = list(map(int, input().split())) #filhote, adulto, rei

tipo = {
    "F":formigas[0],
    "A":formigas[1],
    "R":formigas[2]
}

#capacidade de consumo e qtd de cupins
m, n = map(int, input().split())

entrada = input()

tamandua = [m]
total_comidas = 0

contador = 0

for i in range(n):
    print(tamandua, tipo[entrada[i]])
    gramas_fm_atual = tipo[entrada[i]]
    capacidade_atual = tamandua[len(tamandua)-1]
    if gramas_fm_atual < capacidade_atual:
        contador+=1
        capacidade_atual-=gramas_fm_atual
    else:
        total_comidas+=contador
        contador=0
        tamandua.append(len(tamandua))
        
print(total_comidas)