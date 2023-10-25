#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n; 

    vector<queue<int>> arr(3);

    int contador_1 = 0; int contador_2 = 0; int contador_3 = 0;
    
    for (int i = 0; i < n; i++)
    {
        int lido; 
        cin >> lido;

        // vetor que salva skill e index

        if (lido == 1){
            arr[0].push(i+1);
            contador_1++;
        }
        else if (lido == 2){
            arr[1].push(i+1);
            contador_2++;
        }else{
            arr[2].push(i+1);
            contador_3++;
        }
    }
    
    int mini;
    mini = min({contador_1, contador_2, contador_3});

    if (mini >= 1){

        cout << mini << endl;

        for (int i = 0; i < mini; i++)         // aqui tbm poderia if(!fila.empty())

        {
            cout << arr[0].front() << " " << arr[1].front() << " " << arr[2].front() << endl;
            arr[0].pop();
            arr[1].pop();
            arr[2].pop();

        }

    }else{
        cout << "0" << endl;
    }

    return 0;
}