#include<bits/stdc++.h>

using namespace std;

//#define float long double 

float distanciaf(int x1, int x2, int y1, int y2){
    x1 = (float) x1;
    x2 = (float) x2;
    y1 = (float) y1;
    y2 = (float) y2;

    return abs(x2-x1) + abs(y2-y1);
    
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x, y, x2, y2, preco, distancia, preco_final;

    int menor_preco, menor_indice;

    menor_indice = 0;
    menor_preco = 1000000000;

    cin >> n >> x >> y;

    for (int i = 1; i < n+1; i++)
    {
        cin >> x2 >> y2 >> preco;
        distancia = distanciaf(x, x2, y, y2);
        preco_final = (2 * distancia) + preco;

        //cout << "distancia " << i << ": " << distancia << " | preco_final: " << preco_final << endl;

        if (preco_final < menor_preco){
            //cout << "vou trocar o menor indice kkkk";
            menor_preco = preco_final;
            menor_indice = i;
        }
    }
    
    cout << menor_preco << " " << menor_indice << endl; 

    return 0;
}