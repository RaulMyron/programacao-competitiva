
def verifica_bonito(ano):

  digits = str(ano)
  
  for i in range(len(digits)):
    for j in range(i+1, len(digits)):
      if digits[i] == digits[j]:
        return False

  return True

n = int(input())

while True:
    
          
    n+=1
    #print("ano verificado", n)
    if verifica_bonito(n):
        print(n)
        break  