#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int a, b;
    cin >> a >> b;
    
    vector<int> lista;
 
    for (int i = 0; i < a; i++) {
        int x;
        cin >> x;
        lista.push_back(x);
    }
 
    sort(lista.begin(), lista.end());
 
    vector<int> consultas;
    
    for (int i = 0; i < b; i++) {
        int x;
        cin >> x;
        consultas.push_back(x);
    }
    
    string saida = "";
    
    for (int i = 0; i < b; i++) {
        int elemento = consultas[i];
        auto it = find(lista.begin(), lista.end(), elemento);
        if (it != lista.end()) {
            int index = distance(lista.begin(), it) + 1;
            saida += to_string(index) + " ";
        } else {
            saida += "-1 ";
        }
    }
    
    cout << saida << endl;
    
    return 0;
}