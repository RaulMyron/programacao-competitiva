
with open('Trebuchet.txt') as txt:
    
    contador = 0
    
    for line in txt:
        linha = line.strip()

        sizeOf = len(linha)

        letra = ''
        
        for i in range(sizeOf):
            if linha[i].isdigit():
                letra+=linha[i]
                break
                
        for i in range(sizeOf-1,-1,-1):
            if linha[i].isdigit():
                letra+=linha[i]
                break
   
        contador+=int(letra)
                
    print('result', contador)