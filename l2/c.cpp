#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int q;

    cin >> q;
    stack<int> saco;
    stack<int> maxStack;
    
    while(q--){
        string comando;
        int valor;

        cin >> comando >> valor;

        if(comando == "A"){
            saco.push(valor);
            if(maxStack.empty()){
                maxStack.push(valor);
            }
            else if(maxStack.top() < valor){
                maxStack.push(valor);
            }
            else{
                maxStack.push(maxStack.top());
            }
        }
        else if(comando == "V"){
            if(!saco.empty()){
                cout << maxStack.top() << endl;
            }else{
                cout << 0 << endl;
            }
        }
        else if(comando == "R"){
            saco.pop();
            maxStack.pop();
        }

    }


    return 0;
}