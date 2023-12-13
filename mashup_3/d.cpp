#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i, j, k, n, m, x;
    int qtd=0;

    cin >> n;
    priority_queue<int> pq;

    cin>>x;
    for(i=2;i<=n;i++)
    {
        cin>>m;
        pq.push(m);
    }

    while(x<=pq.top())
    {
        m=pq.top();
        pq.pop();

        x++;
        pq.push(m-1);

        qtd++;

    }

    cout  <<  qtd << "\n";

    return 0;
}
