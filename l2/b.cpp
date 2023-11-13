#include <bits/stdc++.h>

using namespace std;

// #define float long double

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, f, p;

    cin >> n >> f >> p;

    queue<int> carros;

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        carros.push(aux);
    }

    int contador, tempo;
    contador = f;
    tempo = 0;
    float resto;
    
    while (!carros.empty())
    {
        //cout << carros.front() << endl;

        resto = contador % f;
        //cout << "contador " << contador << " f " << f << " resto " << resto << endl;

        if (contador % f == 0)
        {
            if (carros.front() <= p)
            {
                //cout << "tempo " << "+5" << endl;
                carros.pop();
                tempo += 5;
            }
            else
            {
                //cout << "tempo " << "+10" << "carro vai para " << carros.front()-2 << endl;
                carros.push(carros.front()-2);
                tempo += 10;
                carros.pop();
            }
        }
        else
        {
            //cout << "tempo " << "+1" << endl;
            tempo++;
            carros.pop();
        }
        contador++;
    }

    cout << tempo << endl;

    return 0;
}