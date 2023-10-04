#include<bits/stdc++.h>

using namespace std;

/* vector<tipo> nome_variavel */

int main(){
    
    int n, aux;

    vector<int> arr;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &aux);
        arr.push_back(aux); /* append() ou insert() do python */
    }

    for(int i = 0; i<(int) arr.size(); i++){ /* size retorna t_size type, logo por isso o casting */
        arr[i]=2*arr[i];
        printf("%d\n", arr[i]);
    }

    /* cout << arr.size() << endl; com cout */ 

    return 0;

}