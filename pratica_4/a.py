def dfs(substring, visitado):
    
    visitado.add(substring)

    for i in range(len(substring)):
        
        nova_str = substring[:i] + substring[i + 1:]

        #if len(nova_str) and nova_str not in visitado:
        if len(nova_str):
            dfs(nova_str, visitado)

string = input()
sorted_string = ''.join(sorted(string))

visitado = set()

dfs(sorted_string, visitado)


for substring in sorted(visitado):
    print(substring)
