#include<bits/stdc++.h>

using namespace std;

//#define float long double 

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k1, k2;
    int n1, n2;

    cin >> n >> k1 >> k2;

    multiset<int> ordenado;

    vector<int> a;
    vector<int> b;

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        a.push_back(aux);
    }

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        b.push_back(aux);
        ordenado.insert(abs(a[i]-aux));
    }
    
    int operations = k1+k2;

    while (operations--)
    {
        int x = *ordenado.rbegin();
        ordenado.erase(ordenado.find(x));
        ordenado.insert(abs(x - 1)); 
    }

    long long int resultado = 0;

    for (auto x: ordenado){
        resultado+= (long long int) x * x;
    }
    
    cout << resultado << endl;

    return 0;
}