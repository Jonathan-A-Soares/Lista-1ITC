#include <stdio.h>

void main() {
    char n[50];
    int cv;
    float vv, s;
    
    printf("Digite nome, carros vendidos e valor das vendas (separados por espaço): ");
    scanf("%s %d %f", n, &cv, &vv);
    
    s = 200.0 + (30.0 * cv) + (0.05 * vv);
    
    printf("O salário de %s é R$%.2f\n", n, s);
    
}


// Algoritmo
//   Declara variáveis n[50], cv, vv, s
//   Escreva "Digite nome, carros vendidos e valor das vendas (separados por espaço):"
//   Leia n, cv, vv
//   s -> 200.0 + (30.0 * cv) + (0.05 * vv)
//   Escreva "O salário de", n, "é R$", s
// Fim
