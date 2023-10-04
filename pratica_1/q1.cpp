/*
 * No Terminal do Linux, digite:
 * compilar:
 *     g++ vinicius.cpp -std=c++17 -o vinbin
 * executar
 *     ./vinbin
 * */

#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int unidades_regular , preco_regular , unidades_promocao , preco_promocao;
    float preco_p_unidade_regular, preco_p_unidade_promo = 0;

    cin >> unidades_regular >> preco_regular >> unidades_promocao >> preco_promocao;

    //calcular o preço por unidade
    
    preco_p_unidade_regular = (float) preco_regular / (float) unidades_regular;
    preco_p_unidade_promo = (float) preco_promocao / (float)unidades_promocao;

    if(preco_p_unidade_regular > preco_p_unidade_promo){
        cout << "Promocao";
    }
    else{
        cout << "Enganacao";
    }
    

    return 0;

}
