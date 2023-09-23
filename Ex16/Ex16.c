#include <stdio.h>

void main(){
    int s,i0,i1,i2;
    printf("Insira segundos:");
    scanf("%i",&s);
    i0 = s/3600;
    i1 = (s%3600)/60;
    i2 = s%60;
    
    printf("Convertendo da:%iHrs %iMin %isec\n",i0,i1,i2);
}


// Algoritimo
//     Declara variaveis s,i0,i1,i2;
//     Escreva "Insira segundos:"
//     leia s
//     i0 -> s/3600;
//     i1 -> (s%3600)/60;
//     i2 -> s%60;
//     Escreva "Horas:", i0
//     Escreva "Minutos:", i1
//     Escreva "Segundos", i2
// Fim