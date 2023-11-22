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
 
    int n, q;
 
    cin >> n >> q;
 
    vector<long long> deltasum(n+1, 0);
 
    for (int i = 0; i < q; ++i)
    {
 
        int l, r, x;
        cin >> l >> r >> x;
 
        deltasum[l-1] += x; //pos
        //deltasum[r+1-1] -=x; //o anterior no psum é +x portanto o ultimo é -x
        deltasum[r] -=x; //o anterior no psum é +x portanto o ultimo é -x
 
    }
 
    long long int atual = 0;
    
    vector<long long> psum(n, 0);
 
    for (int i = 0; i <= n ; i ++) {
        atual += deltasum[i];
        psum[i] = atual;
    }
 
    using_index(psum, n);
 
    return 0;
}