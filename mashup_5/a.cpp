#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define sws ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const long long int INF = 0x3f3f3f3f3f;
const long double PI = acos(-1);

int32_t main()
{
    sws;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long int array1[n];
        long long int array2[n];

        for (int i = 0; i < n; i++)
        {
            long long int aux;
            cin >> aux;
            array1[i] = aux;
        }
        for (int i = 0; i < n; i++)
        {
            long long int aux;
            cin >> aux;
            array2[i] = aux;
        }

        for (int i = 0; i < n; i++)
        {
            
            if (array2[i] >= array1[i]){
                long long int aux1 = array1[i];
                long long int aux2 = array2[i];

                array1[i] = aux2;
                array2[i] = aux1;
            }
        }

        long long int ans1 = *max_element(array1, array1+n);
        long long int ans2 = *max_element(array2, array2+n);

        long long int ans = (ans1*ans2);

        cout << ans << endl;
        

    }

    return 0;
}
