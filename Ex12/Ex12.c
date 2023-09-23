#include <stdio.h>

void main(){
    float r,i;
    printf("Insira Raio de um ccircuferencia:\n");
    scanf("%f,",&r);
    i = 3.141592 * (r*r) ;
    printf("Area da circuferencia e :%f\n",i);
}



// Algoritimo
//     Declara variaveis r,i
//     Escreva "Insira Raio de um circuferencia:"
//     leia r 
//     i -> 3.141592 * (r*r)
//     Escreva "Area da circuferencia e:", i
// Fim


// #include <stdio.h>

// void main(){
//     int r,h,i;
//     printf("Insira Altura e Raio de um cilindro:\n");
//     scanf("%i,%i",&r,&h);

//     i = 3.141592 * (r*r) * h;
   
//     printf("Volume do cilindro e :%i\n",i);
    
// }