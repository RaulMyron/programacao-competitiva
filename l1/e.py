N, A, B = map(int, input().split())

dicionario = {}

soma = 0

for i in range(1, N + 1):
    soma_digitos = sum(int(d) for d in str(i))

    if A <= soma_digitos <= B:
        dicionario[i] = True

soma = sum(map(int, dicionario.keys()))

print(soma)
