#include <bits/stdc++.h>
#include <cmath>
using namespace std;
 
int main() {
    long long int numero, resposta;
    scanf("%lld", &numero);
    
    resposta = cbrt(numero);
    
    if((resposta*resposta*resposta) == numero){
        printf("%lld", resposta);
    } else {
        printf("-1");
    }
 
    return 0;
}