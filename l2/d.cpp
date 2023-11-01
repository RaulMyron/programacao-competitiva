#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

//#define float long double 

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, tempo_total;

    cin >> n >> m;

    queue<pii> caixa; 
    vector<pii> caixa_ocupado(n);
    queue<int> clientes;
    tempo_total = 0;
    
    for (int i = 0; i < n; i++)
    {   //tempo e se ta ocupado
        int aux;
        cin >> aux;
        caixa.push(make_pair(aux,0));
    }

    for (int i = 0; i < m; i++)
    {
        int aux;
        cin >> aux;
        clientes.push(aux);
    }

    while(!clientes.empty() and !caixa_ocupado.empty() and !caixa.empty()){


        for (int i = 0; i < n; i++)
        {
            pii caixa_atual = caixa.front();
            
            int tempo_caixa, tempo_de_espera, tempo_cliente, disponibilidade;
            tempo_caixa = caixa_atual.first;
            tempo_cliente = clientes.front();
            tempo_de_espera = tempo_caixa * tempo_cliente;
    

            cout << "tempo de espera: " << tempo_de_espera << endl;

            if (caixa_atual.second == 0 and caixa_ocupado.empty()){ //caixa disponivel e fila de caixa vazia
                caixa_ocupado.push_back(make_pair(tempo_caixa,tempo_de_espera));
                caixa.pop();
                tempo_total+= tempo_de_espera;
            }
            
        }
        
        while (!caixa_ocupado.empty())
        {
            for (int i = 0; i < caixa_ocupado.size(); i++) //para cada um dos elementos no caixa
            {

                int tempo_atual, tempo_final;
                tempo_atual = caixa_ocupado[i].first;
                tempo_final = caixa_ocupado[i].first;

                if(tempo_atual == tempo_final){
                    caixa.push(make_pair(,0))
                    caixa_ocupado.erase(next(caixa_ocupado.begin(), i));
                }else{
                    tempo_atual++;
                }

            }
    
        }
        
    }
    
    cout << tempo_total << endl;

    return 0;
}