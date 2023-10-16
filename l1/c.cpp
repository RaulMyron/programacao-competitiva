#include<bits/stdc++.h>

#include <iostream>
#include <cmath>

using namespace std;

//#define float long double 

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, A;
    float RESTO;

    cin >> N >> A;

    RESTO = N % 500;

    int DIFF = A - RESTO;

    if (DIFF >= 0){
        cout << "Sim" << endl;
    }else{
        cout << "Nao" << endl;
    }

    return 0;
}
 
