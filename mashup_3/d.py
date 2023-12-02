input()

candidatos = list(map(int, input().split()))
sanaduva = candidatos[0]
candidatos = sorted(candidatos[1:])
maior = candidatos[-1]

array_diff = 0
qtd = 0

for i in range(len(candidatos)):
    #print(candidatos[i], maior, candidatos[i]-sanaduva)
    if(sanaduva>maior):
        break
    if(sanaduva+candidatos[i]>maior):
        qtd=candidatos[i]-sanaduva
        break

print(qtd)