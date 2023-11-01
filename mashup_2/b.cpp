#include<bits/stdc++.h>


using namespace std;

#define float long double 

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;

    cin >> n >> m;

    stack<double> stack;

    for (int i = 0; i < m; i++)
    {
        int decisao;
        float aux;
        cin >> decisao >> aux;

        if(decisao == 1){
            stack.push(aux);
        }else if(decisao == 2){
            int contador;
            contador = (int) aux;
            while(contador != 0){
                //cout << "DELETANDO O ULTIMO" << endl;
                stack.pop();
                contador--;
            }
        }
    }

    int valor_final; 
    valor_final = 0;

    while (!stack.empty())
    {
        valor_final+=stack.top();
        stack.pop();
    }

    cout << valor_final + n << endl;

    

    return 0;
}