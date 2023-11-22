#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q;

    cin >> n >> q;

    vector<long long int> psum(n);
    psum.push_back(0);

    for(int i = 1; i < n+1; i++) {
        long long int aux;
        cin >> aux;
        psum[i] = psum[i-1] + aux;
        //cout << "adding " <<  psum[i-1] + aux << " into psum" << endl;
    }

    psum.push_back(0);

   /*  for (int i = 0; i < psum.size(); i++)
    {
        cout << psum[i] << " ";
    } */
    //cout << endl;

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        //cout << "consuta entre " << l << " " << r << endl;
        cout << psum[r] - psum[l-1] << endl;
    }

    return 0;
}