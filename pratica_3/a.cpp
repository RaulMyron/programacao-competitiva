    #include <bits/stdc++.h>

    using namespace std;

    bool check_power_of_2(int numero)
    {
        return !(numero & (numero - 1)); //nao funciona pra 0, pra arrumar só fazer um and com o bit
    }

    int main()
    {

        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int n;
        cin >> n;

        while(n--)
        {

            int x;

            cin >> x;

            if (x == 1){
                cout << 3 << endl; 
                continue;
            }

            int lsb;
            lsb = x & (-x);

            if(lsb ^ x){
                cout << lsb << endl;
            }else{ //se o xor não for igual, ele é potencia de 2
                cout << x + 1 << endl; 
            }
            
            
        }

        return 0;
    }