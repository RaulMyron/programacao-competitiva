a, b = map(int, input().split())

portais = list(map(int, ('0 ' + input()).split()))

posicao = 1

while posicao < (b):
    posicao += portais[posicao]
    
if posicao==b:
	print("YES")
else:
	print("NO")