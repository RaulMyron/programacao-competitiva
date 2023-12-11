
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        set<int> pairs;
        
        string line;
        
        for (int i = 0; i < n; i++)
        {
            unsigned long int aux;
            cin >> aux;
            if (!(aux & 1)){
                pairs.insert(aux);
            }
        }

        int operacoes = 0;
        while (!pairs.empty())
        {
            int aux = *pairs.rbegin();
            pairs.erase(aux);
            aux >>= 1;
            if (!(aux & 1))
            {
                pairs.insert(aux);
            }
            operacoes++;
        }

        cout << operacoes << endl;
    }

    return 0;
}