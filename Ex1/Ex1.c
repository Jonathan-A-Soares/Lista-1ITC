#include <stdio.h>

void main(){
    int A,i0,i1;
    printf("Insira um Numero:");
    scanf("%i",&A);
    i0 = A - 1;
    i1 = A + 1;
    printf("Seu atencessor:%i\n",i0);
    printf("Seu sucessor:%i\n",i1);
    
}


// Algoritimo
//     Declara variaveis A,i0,i1
//     Escreva "Insira um Numero:"
//     leia A 
//     i0 -> A - 1
//     i1 -> A + 1
//     Escreva "Seu atencessor:", i0
//     Escreva "Seu sucessor:", i1
// Fim