#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;

    vector<int> precos;
    
    precos.resize(N);

    for (int i = 0; i < N; i++)
    {
        cin >> precos[i];
    }

    sort(precos.begin(), precos.end());

    int esquerda = 0, direita = N - 1;
    int resposta_x, resposta_y;

    while (esquerda < direita)
    {
        int soma = precos[esquerda] + precos[direita];
        if (soma == M)
        {
            resposta_x = precos[esquerda];
            resposta_y = precos[direita];
            break;
        }
        else if (soma < M)
        {
            esquerda++;
        }
        else
        {
            direita--;
        }
    }

    cout << resposta_x << " " << resposta_y << endl;

    return 0;
    
}
