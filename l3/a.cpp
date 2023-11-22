#include<bits/stdc++.h>

using namespace std;

//#define float long double 

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;

    map<int, int> estoque;

    while (q--)
    {
        int t, m;

        cin >> t >> m;

        if (t == 1){

            if(estoque.count(m)>0){
                //cout << "adding into existing" << endl;
                estoque[(int)m]+=1;
            }else{
                //cout << "creating into stack" << endl;
                estoque[(int)m]=1;
            }

            //cout << estoque[m] << endl;

        }else{

            //cout << estoque.count(m) << endl;

            if(estoque.count(m)){
                cout << "Sim" << endl; 
            }else{
                cout << "Nao" << endl;
            }

        }

    }

    return 0;
}