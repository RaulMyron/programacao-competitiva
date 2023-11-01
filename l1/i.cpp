#include<bits/stdc++.h>

using namespace std;

//#define float long double 

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    int retangulo_w, retangulo_h;

    int max

    retangulo_w = 1;
    retangulo_h = 1;

    cin >> n >> m;

    vector<string> matriz;

    for (int i = 0; i < n; i++)
    {   
        string aux;
        cin >> aux;
        matriz.push_back(aux);
    } 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matriz[i][j] << endl;
            if (matriz[i][j] == 1){
                retangulo_w = min(retangulo_w, j+1); 
                retangulo_h = min(retangulo_h, i+1);
            }
        }
        
    }
    
    cout << retangulo_w << "x" << retangulo_h << endl;

    return 0; 
}