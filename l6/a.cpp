#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;

    cin >> a >> b;

    int portais[a+1];

    portais[0] = 0;

    for (int i = 1; i < a; i++)
    {
        int aux;
        cin >> aux;
        portais[i] = aux;
    }

    int posicao = 1;

    while (posicao < b)
    {
        posicao += portais[posicao];
    }

    if(posicao == b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    

    return 0;
}