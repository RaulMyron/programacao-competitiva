#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long int n, multiplier = 1;
    stack<long long int> ans;

    cin >> n;

    while (n > 0)
    {

        //freopen("output/input.txt", "r", stdin);
        //freopen("output/output.txt", "w", stdout);

        int aux = n;
        int temp = 0;

        while (aux)
        {
            if (aux % 10)
            {
                temp += multiplier;
            }
            aux /= 10;
            multiplier *= 10;
        }

        ans.push(temp);
        n -= temp;

        multiplier = 1;

    }

    cout << ans.size() << endl;

    while (!ans.empty())
    {
        cout << ans.top() << " ";
        ans.pop();
    }
    cout << endl;

    return 0;
}