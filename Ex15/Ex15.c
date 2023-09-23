#include <stdio.h>

void main(){
    float y,x,i0,Price;
    printf("Insira Largura comprimento preço por m2:");
    scanf("%f,%f,%f",&x,&y,&Price);
    i0 = Price *(x * y);
    printf("Preço do terreno e:%f\n",i0);
}


// Algoritimo
//     Declara variaveis y,x,i0,Price
//     Escreva "Insira Largura comprimento preço por m2:"
//     leia x,y price
//     i0 -> Price *(x * y);
//     Escreva "Preço do terreno e:", i0
// Fim