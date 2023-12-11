n = int(input())

for _ in range(n):
    
    input()
    entrada = input()
    
    if entrada.count('0') > entrada.count('1'):
        print("YES")
    elif '10' in entrada or '01' in entrada:
        print("YES")
    else:
        print("NO")
