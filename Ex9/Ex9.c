#include <stdio.h>

void main(){
    float C, F;
    printf("Insira a temperatura em graus Celsius:");
    scanf("%f",&C);
    F = (C*1.8)+ 32.0;
    printf("Temperatura em Fahrenheit:%f\n",F);
}


// Algoritimo
//     Declara variaveis C,F
//     Escreva "Insira a temperatura em graus Celsius:"
//     leia C 
//     F -> (C*1.8)+ 32.0
//     Escreva "Temperatura em Fahrenheit:", F
// Fim