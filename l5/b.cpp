#include <bits/stdc++.h>

using namespace std;

string wordReverse(string str)
{
    int i = str.length() - 1;
    int start, end = i + 1;
    string result = "";
 
    while (i >= 0) {
        if (str[i] == ' ') {
            start = i + 1;
            while (start != end)
                result += str[start++];
 
            result += ' ';
 
            end = i;
        }
        i--;
    }
    start = 0;
    while (start != end)
        result += str[start++];
 
    return result;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long int n;

    cin >> n;

    unsigned long long int n_2 = static_cast<unsigned long long>(n);

    unsigned long long int resposta = 0;
    unsigned long long int numero = 0;
    unsigned long long int qtd_0 = 1;

    while (n_2 != 0)
    { // desloca do MSB ate o LSB
        unsigned long long bit = n_2 & 1;
        if (bit == 1)
        {
            resposta+=0;
            //cout << 1 << " deslocando 0 a esquerda " << bitset<4>(resposta) << " " << n_2 << " " << qtd_0 << endl;
        }
        else
        {
            resposta+=qtd_0;
            //cout << 0 << " deslocando 1 a esquerda " << bitset<4>(resposta) << " " << n_2 << " " << qtd_0 << endl;
        }
        n_2 >>= 1;
        qtd_0 <<= 1;
    }

    cout << n << " "<< resposta << endl;

    // cout << __builtin_clzll(n) << " " << BITCOUNT << endl;

    return 0;
}