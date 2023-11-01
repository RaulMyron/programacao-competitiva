n, m = map(int, input().split())

moedas = {}

entrada = map(int, input().split())

for i in entrada:
    if i not in moedas:
        moedas[i] = [1, i]
    else:
        moedas[i] = [moedas[i][0]+1, moedas[i][1]+i]

maior_valor = 0
index_maior = 0



moedas = dict(sorted(moedas.items(), reverse=True))

chaves = list(moedas.keys())

for v in range(len(moedas)):
    if moedas[chaves[v]][1] > maior_valor:
        maior_valor = moedas[chaves[v]][1]
        index_maior = chaves[v]

print(maior_valor, index_maior)

    #print(moedas, v, moedas.values(), moedas.keys())