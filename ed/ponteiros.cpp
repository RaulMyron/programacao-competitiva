#include <bits/stdc++.h>
using namespace std;

/* basic structure  */

int main()
{

    int a = 5;
    int *pa; /* ponteiro inteiro */

    /* operadores

    &a retorna endereço
    *a retorna o conteudo em um enderenço em um ponteiro
    qualquer indireto

     */


    printf("Endereco a: %p\n", &a);
    printf("Endereco *pa: %p\n", &pa);
    printf("tamanho em bytes de int",sizeof(int))

    pa = &a; /* pa aponta para a (recebe o endereco de A) */

    return 0;
}