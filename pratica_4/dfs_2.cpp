#include <bits/stdc++.h>

using namespace std;

map<string, bool> visitado;

void dfs(string substr)
{
    visitado[substr] = true;

    for (int i = 0; i < substr.size(); i++)
    {
        char removido = substr[i];
        substr.erase(i, 1);

        if (substr.size() > 0 and visitado.count(substr) == false)
            dfs(substr);

        substr.insert(i, 1, removido);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;

    dfs(str);

    for (auto &letra : visitado)
        cout << letra.first << "\n";

    return 0;
}   