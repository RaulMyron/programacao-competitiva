#include<bits/stdc++.h>
 
using namespace std;
 
//#define float long double 
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
 
    cin >> n;
 
    while (n--)
    {
        unsigned long long int aux;
        cin >> aux;
 
        unsigned long long int msb = __builtin_clzll(aux);
        
        unsigned long long int resultado = (pow((64-msb-1), 2)-1);

        cout << resultado << endl;
 
    }
    
 
    
 
    return 0;
}