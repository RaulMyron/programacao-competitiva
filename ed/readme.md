# Stack vs Queue

| op                | Stack                | Queue               |
|-------------------|----------------------|---------------------|
| Verificar Vazio   | empty()              | empty()             |
| Inserção          | Empilhar push()      | Enfileirar push()   |
| Verifica elemento | Topo top() -> remove | Frente front()      |
| Remoção           | Desempilhar pop()    | Desinfileirar pop() |
| Tamanho           | size()               | size()              |
|                   | LAST IN FIRST OUT    | FIRST IN FIRST OUT  |

# Fila de prioridade

No STL a fila de prioridade é via heap (uma binary tree).

Uma heap é uma estrutura de dados não linear baseada em uma árvore de busca.

              5      
        2           8
      1   3       7   10   nodo filho esquerdo de 8
                        nodo filho direito de 8

Acessando nodos
dir_i = 2*i + 1
esq_i = 2*i + 2
i: index

| 5 | 2 | 8 | 1 | 3 | 7 | 10 | 

busca binária = o(log(n))

| op                | Fila de Prioridade | Fila de Prioridade (Heap) |
|-------------------|--------------------|---------------------------|
| Verificar Vazio   | o(1)               | o(1)                      |
| Inserção          | o(n)               | o(log(n))                 |
| Verifica elemento | o(1)               | o(1)                      |
| Remoção           | o(1)               | remover o(log(n))         |
| Tamanho           | size()             | size()                    |