#include <bits/stdc++.h>
using namespace std;


typedef pair<int,int> pii;

/* COMPARADOR DO SORT */ /* se é verdadeiro não faz troca, se for falso realiza a troca */ /* ordenação crescente de first */
bool comp(pii a, pii b){ 
    if(a.first == b.first){ 
        return a.second < b.second;
    }
    return a.first < b.first;
}

/* basic structure  */


int main()
{
    int n;

    vector<pii> v = {{3,6}, {7,2}, {1,3}, {9,2}, {1,10}};

    priority_queue<int> pq_max; //fila de prioridade max
    priority_queue<int, vector<int>, greater<int>> pq_min; //fila

    sort(v.begin(), v.end(), comp);

    for (size_t i = 0; i < v.size(); i++)
    {
        printf("(%d,%d)", v[i].first, v[i].second);
    }

    printf("\n");

    pq_max.push(5);
    pq_max.push(3);
    pq_max.push(2);
    pq_max.push(7);

    pq_min.push(5);
    pq_min.push(3);
    pq_min.push(2);
    pq_min.push(7);


    if(pq_max.empty()){
        printf("Esta vazia\n");
    }else{
        printf("Nao esta vazia\n");
    }

    while(!pq_max.empty()){
        int elem = pq_max.top();
        pq_max.pop();
        printf("%d ", elem);
    }

    printf("\n");

    while(!pq_min.empty()){
        int elem = pq_min.top();
        pq_min.pop();
        printf("%d ", elem);
    }

    printf("\n");



    return 0;
}