#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

/* basic structure  */

int main()
{
    int n, q, quax, tipo, maior;

    queue<int> fila;

    if(fila.empty()){
        printf("Fila vazia\n");
    }

    fila.push(3); /* enfileirar - insere elemento */
    fila.push(1);
    fila.push(7);
    fila.push(8);

    printf("Elementos: %d\n", (int) fila.size());

    while (!fila.empty())
    {
        int elem = fila.front();
        fila.pop(); //desinfileirar
        printf("%d ", elem);
    }
    
    printf("\n");

    return 0;
}