def dfs(substring, visitado):

    visitado.add(substring)

    for i in range(len(substring)):
        for j in range(i + 1, len(substring) + 1):
            
            new_substring = substring[:i] + substring[i:j]
            
            if new_substring not in visitado and new_substring != substring:
                dfs(new_substring, visitado)

string = input()
visitado = set()

for i in range(len(string)):
    for j in range(i + 1):
        
        new_substring = string[j:i] + string[i]
        
        #print('substr', new_substring)
        
        if new_substring not in visitado:
            dfs(new_substring, visitado)
            

for substring in sorted(visitado):
    print(substring)