#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define endl "\n"
#define sws                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int32_t main()
{
    sws;

    ll n, m;

    cin >> m;

    int elems[3] = {5, 3, 2};

    while (m--)
    {
        cin >> n;

        ll qtd2 = 0, qtd3 = 0, qtd5 = 0;

        while (n % 5 == 0){
            n /= 5;
            qtd5++;
        }

        while (n % 3 == 0){
            n /= 3;
            qtd3++;
        }

        while (n % 2 == 0){
            n /= 2;
            qtd2++;
        }

        if (n > 1)
            cout << -1 << endl;
        else
            cout << qtd2 + 2 * qtd3 + 3 * qtd5 << endl;
    }

    return 0;
}
