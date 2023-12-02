#include <bits/stdc++.h>

using namespace std;

template <typename S>
void print(const vector<S>& vector,
                 string sep = " ")
{
    for (int i = 0; i < vector.size()-1; i++) {
        cout << vector[i] << sep;
    }
    cout << endl;
}
 
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q, t;

    cin >> n >> q >> t; //regioes mudas queries

    vector<long long> delta_sum(n + 1, 0);
    vector<long long int> arvores;

    for (int i = 0; i < n; ++i)
    {
        long long int aux;
        cin >> aux;
        //cout << aux << " ue krl cade" << endl; 
        arvores.push_back(aux);
    }

    //print(arvores);

    while (t--)
    {
        int l, r, x, m;
        cin >> l >> r >> x >> m;
    
        if(m <= 5){
            delta_sum[l-1] += x;
            delta_sum[r] -=x; 
        }

        //print(delta_sum);
    }

    vector<long long> psum(n+1, 0);

    long long int atual = 0;

    for (int i = 0; i < n; i++)
    {
        atual += delta_sum[i];
        psum[i] = atual + arvores[i];
        //cout << arvores[i] << " ";
    }
    //cout << endl;
    
    print(psum);

    return 0;
}