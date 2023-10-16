#include<bits/stdc++.h>

using namespace std;

//#define float long double 

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int maior = 0;
    int acumulado = 0;
    int anterior = 0; 

    int array_valor[n];

    for (int i = 0; i<n; i++){

        int valor_lido;
        cin >> valor_lido;
        array_valor[i] = valor_lido;

        if (valor_lido > maior){
            maior = valor_lido;
        }

    }

    for (int i = 0; i<n; i++) acumulado += (maior - array_valor[i]);
    
    cout << acumulado << endl;
    
        

    

    return 0;
}
 
