#include <bits/stdc++.h>
using namespace std;
#define sws cin.tie(0)->sync_with_stdio(0)

int32_t main()
{
    sws;
    int t = 1;
    cin >> t;
    while (t--)
    {   
        int k, x;
        cin >> k >> x;
        int ans = 0, aux = 0;
        int m = (1 + k) * (k) / 2;
        int m1 = m - k;

        if (m1 + m <= x)
            cout << 2 * k - 1 << endl;
        else
        {
            int l = 1, r = 2 * k - 1;

            while (l <= r)
            {
                int mid = (l + r) / 2;

                bool check;
                if (mid <= k)
                    check = (mid + 1) * mid / 2 < x;
                else
                    check = (mid * (mid + 1)) / 2 + ((2 * k - 1 + k - mid) * (mid - k)) / 2 < x;

                if (check)
                {
                    l = mid + 1;
                }
                else
                {
                    ans = mid;
                    r = mid - 1;
                }
                
            }
            cout << ans << endl;
        }
    }

    return 0;
}
