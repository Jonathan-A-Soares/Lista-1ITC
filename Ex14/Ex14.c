#include <stdio.h>
#include <math.h>

void main(){
    float Ca,Co,i0;
    printf("Insira Ca e Co:");
    scanf("%f,%f",&Ca,&Co);
    i0 = sqrt((Ca * Ca)+(Co * Co)) ;
    printf("Hipotenuza e:%f\n",i0);
}


// Algoritimo
//     Declara variaveis Ca,Co,i0
//     Escreva "Insira Ca e Co:"
//     leia Co, Ca 
//     i0 -> RAIZ_QUADRADA((Ca * Ca)+(Co * Co))
//     Escreva "Hipotenuza e:", i0
// Fim