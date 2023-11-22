#include<bits/stdc++.h>

using namespace std;

//#define float long double 

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    map<int, int> teclado;

    string a, b;

    cin >> a >> b;

    int contador = 0;
    for (char  &letra: a){
        //cout << letra <<  " "  << b[contador] << endl;
        teclado[letra]=b[contador];
        contador++;
    }
    
    int q;
    cin >> q;

    while(q--){

        string palavra;
        cin >> palavra;        

        for (char &letra: palavra){
            //cout << letra << " eh maiusculo: " << isupper(letra) << endl;
            if (isupper(letra)){
                cout << (char) toupper(teclado[tolower(letra)]);
            }else if(islower(letra)){
                cout << (char) (teclado[letra]);
            }else{
                cout << letra;
            }
        }
        cout << endl;

    }


    return 0;
}