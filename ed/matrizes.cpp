#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m;
    int matriz[3][3]; /* n linhas por m colunas */

    /* vector<vector><int> */
    vector<int> arr(n, 0);
    /* vector<bool> visitado(n, false) */

    scanf("%d %d", &n, &m);

    for(int i=0; i<n ;i++){
        for(int j = 0; j<m; j++){
            scanf("%d", &matriz[i][j]);
            /* matriz[i][j]=j; */
        }
    }

    for(int i=0; i<n ;i++){
        for(int j = 0; j<m; j++){
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
            /* matriz[i][j]=i; */
        }
    }

    printf("entra matriz 2\n");
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    
    return 0;

}