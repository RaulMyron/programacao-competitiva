#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define sws ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const long long int INF = 0x3f3f3f3f3f;
const long double PI = acos(-1);

int32_t main()
{
    sws;

    map<char, char> dicio;

    string alfabeto1, alfabeto2;

    cin >> alfabeto1;
    cin >> alfabeto2;

    for (int i = 0; i < alfabeto1.size(); i++)
        dicio[alfabeto1[i]] = alfabeto2[i];
    
    string entrada;
    cin >> entrada;

    for(char& letra : entrada) {

        char letra_min = tolower(letra);
        if(dicio.count(letra_min)){
            if(islower(letra))
                cout << dicio[letra_min];
            else
                cout << (char) toupper(dicio[letra_min]);  
        }
        else
            cout << letra;
    }
    cout << endl;
    


    return 0;
}
