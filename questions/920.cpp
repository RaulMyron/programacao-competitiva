#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

/* basic structure  */

int main()
{
    int t;

    scanf("%d", &t);

    while(t--){
        int n, l, r;

        queue<pii> fila;

        scanf("%d", &n);

        for(int i=0; i<n; i++){
            scanf("%d %d", &l, &r);
            fila.push(make_pair(l, r));
        }

        pii student = fila.front();
        fila.pop();
        int tempo = student.first;

        printf("%d", tempo);

        while (!fila.empty())
        {   

            pii student = fila.front();
            fila.pop();
            int tstudent = student.first;
            int paciencia = student.second;
            
            if(tempo <= paciencia){
                printf("%d", tempo);
            }else{
                tempo=tstudent;
            }
            

        }
        




    }


    return 0;
}