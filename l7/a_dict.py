a, b = [int(x) for x in input().split()]

lista = sorted([int(x) for x in input().split()])

dicionario = {}

for i in range(a):
  if lista[i] not in dicionario:
    dicionario[lista[i]] = i + 1

consultas = [int(x) for x in input().split()]

saida = []

for q in consultas:
  if q in dicionario:
    saida.append(dicionario[q])
  else:
    saida.append(-1)

print(*saida)