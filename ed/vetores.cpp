#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    /* max de elementos eh 10 inteiros */

    scanf("%d", &n);
    double vetor[n];

    for(int i = 0; i < n; i++){
        scanf("%lf", &vetor[i]);;
    }

    for(int i = 0; i < n; i++){
        printf("vetor[%d] = %lf\n", i,vetor[i]);;
    }

    printf("\n");

    return 0;
}