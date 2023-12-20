a, b, m, n = [int(x) for x in input().split()]

conta = 0

while a>=b:

    #print(a, b)

    a-=m
    b+=n

    conta+=1
    
print(conta-1)
