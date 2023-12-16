#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> consta(n, vector<int>(m, '.'));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char aux;
            cin >> aux;
            consta[i][j] = aux;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (consta[i][j] == '.'){
                if ((i + j) % 2 == 0)
                    cout << 'B';
                else
                    cout << 'W';
            }
            else
                cout << '-';
        }
    
        cout << endl;

    }

    return 0;
}