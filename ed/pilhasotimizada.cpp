#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int main()
{

    int n, q, aux, tipo, maior;

    stack<pii> pilha;

    scanf("%d %d", &n, &q); /* QTD DE ELEMENTOS | QTD OPERACOES */

    /* INSERINDO NA PILHA */

    scanf("%d", &aux);
    pilha.push(make_pair(aux, aux));

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &aux);

        pii elem = pilha.top();
        pilha.push(make_pair(aux, max(aux, elem.second))); // O(1)
    }

    /* ENQUANTO A PILHA EXISTIR */

    while (q--)
    {
        scanf("%d", &tipo);
        if (tipo == 1)
        {
            printf("%d\n", pilha.top().second);
        }
        else
        {
            if (tipo == 2)
            {
                scanf("%d", &aux);
                pilha.push(make_pair(aux, max(aux, pilha.top().second)));
            }
            else
            {
                pilha.pop();
            }
        }
    }

    return 0;
}