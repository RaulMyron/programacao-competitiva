number_words = {
    "one": 1,
    "two": 2,
    "three": 3,
    "four": 4,
    "five": 5,
    "six": 6,
    "seven": 7,
    "eight": 8,
    "nine": 9,
}

chaves = ["one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]

def verifica_palavra(palavra, chaves):
    
    for microkey in chaves:
        if microkey in palavra:
            return microkey
        
    return False
    


with open('Trebuchet.txt') as txt:
    
    contador = 0
    
    inwich = 0
    
    for line in txt:
        linha = line.strip()

        sizeOf = len(linha)

        letra = ''
        
        palavra_ate_agr = ''
        
        for i in range(sizeOf):
            
            verificando = verifica_palavra(palavra_ate_agr, chaves)
            
            if verificando is not None and verificando is not False:
                letra+=str(number_words[verificando])
                break
            elif linha[i].isdigit():
                letra+=linha[i]
                palavra_ate_agr=''
                break
            else:
                palavra_ate_agr+=linha[i]
                
        palavra_ate_agr = ''    
        
        for i in range(sizeOf-1,-1,-1):
            
            verificando = verifica_palavra(palavra_ate_agr[::-1], chaves)
            
            if verificando is not None and verificando is not False:
                letra+=str(number_words[verificando])
                break
            elif linha[i].isdigit():
                letra+=linha[i]
                palavra_ate_agr=''
                break
            else:
                palavra_ate_agr+=linha[i]
   
        contador+=int(letra)
        inwich+=1
        
        print(inwich, linha, letra, contador, sep = " | ")
                
    print('result', contador)