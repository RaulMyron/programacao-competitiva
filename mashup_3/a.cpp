#include<bits/stdc++.h>

using namespace std;

template <typename S>
void using_index(const vector<S>& vector,
                 string sep = " ")
{
    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i] << sep;
    }
    cout << endl;
}
 
int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<long long int> psum(n, 0);
 
    int maior = 0;

    psum.push_back(0);

    //using_index(psum); 

    for(int i = 1; i < n+1; i++) {
        long long int aux;
        cin >> aux;
        //cout << aux << endl;
        psum[i] = psum[i-1] + aux;
        if(psum[i]>maior){
            maior = psum[i];
        }
    }

    //using_index(psum); 

    cout << maior + 100 << endl;

    return 0;
}