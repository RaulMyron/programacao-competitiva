#include<bits/stdc++.h>

using namespace std;
#define float long double 

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;
    
    int pontos = 0;

    for(int i = 0; i < n;i++){

        char a, b;

        cin >> a >> b;

        if (a == b){
            pontos++;
        }

    }

    double pontos_finais = 10.00*((double) pontos / (double) n);
    cout << fixed;
    cout  << "Nota: " << setprecision(2) << pontos_finais << endl;

    return 0;
}
 
