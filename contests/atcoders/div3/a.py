t = int(input())

for _ in range(t):
    
    entrada = input()
    
    col = ord(entrada[0])
    row = ord(entrada[1])
    #- ord('0')

    for i in range(1,10):
        if ord(chr('a')) + i - 1 != col:
            print(chr(ord('a') + i - 1), row)
        if i != row:
            print(col, i)   
