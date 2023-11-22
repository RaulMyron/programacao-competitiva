#include <bits/stdc++.h>

using namespace std;

template <typename S>
void using_index(const vector<S>& vector, int n,
                 string sep = " ")
{
    for (int i = 0; i < n; i++) {
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

    cin >> n >> q >> t;

    vector<long long> delta_sum(n + 1, 0);

    for (int i = 0; i < q; ++i)
    {
 
        int l, r, x;
        cin >> l >> r >> x;
 
        delta_sum[l-1] += x; //pos
        delta_sum[r] -=x; //o anterior no psum é +x portanto o ultimo é -x

        //using_index(delta_sum, delta_sum.size());


    }

    vector<long long> psum(n+1, 0);

    long long int atual = 0;

    for (int i = 0; i < n; i++)
    {
        atual += delta_sum[i];
        psum[i] = atual;
    }

    //using_index(psum, n);

    int contador_bons = 0;

    for (int i = 0; i <= n; i++)
    {
        if (psum[i] >= t)
            contador_bons++;
    }

    cout << contador_bons << endl;

    return 0;
}