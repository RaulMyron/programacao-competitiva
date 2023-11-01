#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a, a_sem_ponto;

    cin >> a;

    a_sem_ponto = a.substr(a.find_first_not_of("."));

    size_t pos = 0;
    string delimiter = "r";

    int contador = 0;

    while ((pos = a.find(delimiter)) != string::npos)
    {
        string sapo = a.substr(0, pos);
        if (sapo.find("s") == string::npos)
        {
            contador += count(sapo.begin(), sapo.end(), '.');
        }
        a.erase(0, pos + delimiter.length());
    }

    cout << contador << endl;

    return 0;
}
