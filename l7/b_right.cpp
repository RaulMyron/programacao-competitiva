#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

using namespace std;

int main()
{

    int N, M;
    cin >> N >> M;

    vector<int> precos(N);

    for (int i = 0; i < N; i++)
        cin >> precos[i];

    sort(precos.begin(), precos.end());

    int esquerda = 0, direita = N - 1;

    vector<pair<int, int>> solucoes;

    while (esquerda < direita)
    {
        int soma = precos[esquerda] + precos[direita];
        if (soma == M)
        {
            solucoes.push_back({precos[esquerda], precos[direita]});
            esquerda++;
            direita--;
        }
        else if (soma < M)
            esquerda++;
        else
            direita--;
    }

    int resposta_x, resposta_y;

    int menor_preco = 1000001;

    for (auto solucao : solucoes)
    {
        if (solucao.first < menor_preco)
        {
            resposta_x = solucao.first;
            resposta_y = solucao.second;
            menor_preco = solucao.first;
        }
    }

    cout << resposta_x << " " << resposta_y << endl;

    return 0;
}
