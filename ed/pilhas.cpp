#include <bits/stdc++.h>

using namespace std;

/*
int maxPilha(stack<int> pilha_original) utilizando ponteiro
*/

int maxPilha(stack<int> &pilha_original) /*<--------------------------- UTILIZANDO PONTEIROS */
{

    if (pilha_original.empty())
    {
        return -1000000001; /* -infinito */
    }

    stack<int> pilha_aux;

    int maior = pilha_original.top();
    pilha_original.pop();

    while (!pilha_original.empty())
    {

        int elem = pilha_original.top(); /* le elemento */
        pilha_original.pop();            /* deleta o elemento */

        if (elem > maior) /* se elemento for maior que maior, amazena */
        {
            maior = elem;
        }

        pilha_aux.push(elem);
    }

    while (!pilha_aux.empty())
    {
        int elem = pilha_aux.top();
        pilha_aux.pop();
        pilha_original.push(elem);
    }

    return maior;
}

int main()
{

    int n, q, aux, tipo, maior;

    stack<int> pilha;

    scanf("%d %d", &n, &q); /* QTD DE ELEMENTOS | QTD OPERACOES */

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &aux); /* ADICIONA NA PILHA */
        pilha.push(aux);
    }

    while (q--) /* enqnt q!=0 */
    {
        scanf("%d", &tipo);
        if (tipo == 1)
        {
            maior = maxPilha(pilha);
            printf("%d\n", maior);
        }
        else
        {
            if (tipo == 2)
            {
                scanf("%d", &aux);
                pilha.push(aux);
            }
            else
            {
                pilha.pop();
            }
        }
    }

    return 0;
}