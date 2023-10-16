#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<string> nomes;

    for (int i = 0; i<n; i++){
        string nome;
        cin >> nome;
        nomes.push_back(nome);
    }

    vector<string> sorted_nomes = nomes;
    sort(sorted_nomes.begin(), sorted_nomes.end());

    vector<int> poses;

    for (int i = 0; i<n; i++){
        for (int j = 0; j < n; j++) {
            if (nomes[i] == sorted_nomes[j]) {
                cout << j << " ";
            }
        }

    }

    return 0;
}
 
