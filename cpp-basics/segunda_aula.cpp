#include<bits/stdc++.h>

int main(){

    int a, b;

    scanf("%d", &a);

    if( a % 2 == 0){
        
        printf("eh par\n");

        a--;

    }else{
        a = a+1;
        b = 2*a;
    }

    printf("%d %d\n", a,b);

    /* be aware b may not contain certain values (precautions) */

    return 0;
}