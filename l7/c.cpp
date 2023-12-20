#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define sws ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


int main() {

    sws;

    int N;
    cin >> N;
    
    vector<int> array(N);
    
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    
    vector<int> sorted_array = array;
    sort(sorted_array.begin(), sorted_array.end());
    
    int count = 0;

    for (int i = 0; i < array.size(); i++) {
        for (int j = i + 1; j < array.size(); j++) {
            if (array[i] > array[j]) {
                count++;
            }
        }
    }
    
    cout << (count % 2 == 0 ? "Carlos" : "Marcelo") << endl;
    
    return 0;
}
