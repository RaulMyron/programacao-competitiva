#include<bits/stdc++.h>

using namespace std;

//#define float long double 

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int long long soma = 0;
    for (int i = 0; i < n; i++)
    {
        int long long aux;
        cin >> aux;
        soma+=aux;
    }

    int long long soma2 = 0;

    for (int i = 0; i < n-1; i++)
    {
        int long long aux;
        cin >> aux;
        soma2+=aux;
    }
    
    //cout << soma << " " << soma2 << endl;
    cout << (soma-soma2) << endl;

    int long long soma3 = 0;

    for (int i = 0; i < n -2; i++)
    {
        int long long aux;
        cin >> aux;
        soma3+=aux;
    }

    cout << (soma2-soma3) << endl;


    return 0;
}