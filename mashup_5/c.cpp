// CRÉDITOS AO PROFESSOR VINICIUS LIMA, CODIGO ORIGINAL https://github.com/viniciusrpb/cic0169_programacao_competitiva/blob/main/upsolving/uri1910_ajude_clotilde.cpp

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int buscaLargura(int origem, int destino, vector<bool> passado)
{

    int posicao_atual, passagens;
    queue<pii> q;

    q.push(make_pair(origem, 0));
    passado[origem] = true;

    while (!q.empty())
    {
        tie(posicao_atual, passagens) = q.front();
        q.pop();

        if (posicao_atual == destino)
            return passagens;

        if (posicao_atual % 2 == 0 && passado[posicao_atual / 2] == false)
        {
            passado[posicao_atual / 2] = true;
            q.push(make_pair(posicao_atual / 2, passagens + 1));
        }

        if (posicao_atual + 1 <= 100000 && passado[posicao_atual + 1] == false)
        {
            passado[posicao_atual + 1] = true;
            q.push(make_pair(posicao_atual + 1, passagens + 1));
        }

        if (posicao_atual * 2 <= 100000 && passado[posicao_atual * 2] == false)
        {
            passado[posicao_atual * 2] = true;
            q.push(make_pair(posicao_atual * 2, passagens + 1));
        }

        if (posicao_atual - 1 > 0 && passado[posicao_atual - 1] == false)
        {
            passado[posicao_atual - 1] = true;
            q.push(make_pair(posicao_atual - 1, passagens + 1));
        }
        
    }
    return -1;
}

int main()
{
    int origem, destino, aux, ans;

    cin >> origem >> destino;

    vector<bool> flag(100001, false);

    printf("%d\n", buscaLargura(origem, destino, flag));
   
    return 0;
}
