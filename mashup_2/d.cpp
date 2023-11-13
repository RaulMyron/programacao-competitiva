#include <bits/stdc++.h>

using namespace std;

template <typename S>

void with_separator(const vector<S>& vec,
                    string sep = " ")
{
    // Iterating over all elements of vector
    for (auto elem : vec) {
        cout << elem << sep;
    }
 
    cout << endl;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, y, z, n, m;
    string entrada;
    cin >> x >> y >> z >> m >> n >> entrada;

    map<char, int> cupim;
    cupim['F'] = x;
    cupim['A'] = y;
    cupim['R'] = z;

    int qtd = 0;

    int min_mass = min({x, y, z});

    vector<char> fila_entrada;

    for (int i = 0; i < n; i++)
    {
        fila_entrada.push_back(entrada[i]);
    }

    vector<int> massas_tamadua;

    massas_tamadua.push_back(0);

    for (int i = 0; i < n; i++)
    {
        int massa = cupim[fila_entrada[i]];
        
        for (int i = 0; i < massas_tamadua.size(); i++)
        {

            int massa_momento;
            massa_momento = massas_tamadua[i] + massa;

            if(massa_momento <= m){
                massas_tamadua[i]+=massa;
                break;
            }
            else if(i == massas_tamadua.size()-1){
                massas_tamadua.push_back(massa);
                break;
            }
            
        }

    }

    cout << massas_tamadua.size() << endl;

    return 0;
}