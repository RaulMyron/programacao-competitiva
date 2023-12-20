    #include <bits/stdc++.h>
    using namespace std;

    #define int long long
    #define pii pair<int,int>
    #define ll long long
    #define vi vector<int>
    #define pb push_back
    #define endl "\n"
    #define input(x) for (auto &it : x) cin >> it;
    #define output(x) for (auto &it : x) cout << it << ' ';
    #define sws ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    const int INF = 0x3f3f3f3f3f;
    const long double PI = acos(-1);


    bool valido(int x, int k, vector<int> &arabica, vector<int> &conilon)
    {
        int custo = 0;

        for (int i = 0; i < arabica.size(); i++)
        {
            custo += (int)arabica[i] * x + (int)conilon[i] * x;

            if (custo > k)
            {
                return false;
            }
        }

        return true;
    }

    int dfs(int k, vector<int> &arabica, vector<int> &conilon)
    {

        int lo = 0;
        int hi = 1000000001;

        while (lo < hi)
        {
            int mid = (lo + hi + 1) / 2;

            if (valido(mid, k, arabica, conilon))
            {
                lo = mid;
            }
            else
            {
                hi = mid - 1;
            }
        }

        return lo;
    }

    int32_t main()
    {
        sws;

        int n, k;
        cin >> n >> k;

        vector<int> arabica(n);
        vector<int> conilon(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arabica[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> conilon[i];
        }

        int x = dfs(k, arabica, conilon);

        cout << x << endl;

        return 0;
    }
