#include <bits/stdc++.h>

using namespace std;

// #define float long double

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // cout << (5 >> 2) << endl;

    int qtd;
    int contador = 0;

    cin >> qtd;

    while (qtd != 0)
    {
        if (qtd % 2 == 1){
            contador++;
        }

        qtd >>= 1;
    }

    cout << contador  << endl;

    return 0;
}