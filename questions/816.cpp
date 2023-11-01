#include<bits/stdc++.h>

using namespace std;

//#define float long double 

typedef long long ll;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, q, l, r, a, b;
    cin >> n >> k >> q;

    vector<ll> temperaturas(200001,0);
    vector<ll> delta(200002,0);
    vector<ll> psum(200002,0);

    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        delta[l]++;
        delta[r+1]--;   
    }

    for (int i = 1; i <= 200002; i++)
    {
        temperaturas[i] = temperaturas[i-1]+delta[i];
    }


    for (int i = 0; i < 200002; i++)
    {
        if(temperaturas[i] >= k){
            psum[i] = psum[i-1]+1;
        }
        else{
            psum[i] = psum[i-1];
        }
    }
    
    while (q--){
        cin >> a >> b;
        cout << psum[b] - psum[a-1] << endl;
    }

    return 0;
}