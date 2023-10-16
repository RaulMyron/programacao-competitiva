#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, G, F, C;
    
    cin >> N >> G >> F >> C;

    int menor = min(G,F);

    int valor_max = menor + C;

    if(valor_max > N){
        cout << N << endl; 
    }else{
        cout << valor_max << endl;
    }

    return 0;

}
 
