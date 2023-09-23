#include <stdio.h>

void main() {
    float km_inicial, km_final, litros_gastos, preco_litro, capacidade_tanque;
    float quilometragem_rodada, km_por_litro, autonomia, custo_viagem;

    // Solicitar informações ao motorista
    printf("Digite o Km inicial: ");
    scanf("%f", &km_inicial);

    printf("Digite o Km final: ");
    scanf("%f", &km_final);

    printf("Digite a quantidade de litros gastos: ");
    scanf("%f", &litros_gastos);

    printf("Digite o preço do litro de combustível: ");
    scanf("%f", &preco_litro);

    printf("Digite a capacidade do tanque: ");
    scanf("%f", &capacidade_tanque);

    // Calcula as informações solicitadas
    quilometragem_rodada = km_final - km_inicial;
    km_por_litro = quilometragem_rodada / litros_gastos;
    autonomia = km_por_litro * capacidade_tanque;
    custo_viagem = litros_gastos * preco_litro;

    // Exibe os resultados
    printf("Quilometragem rodada: %.2f km\n", quilometragem_rodada);
    printf("Quilômetros por litro: %.2f km/l\n", km_por_litro);
    printf("Autonomia do veículo: %.2f km\n", autonomia);
    printf("Custo da viagem: R$%.2f\n", custo_viagem);

    
}


// Algoritmo
//   Declara variáveis km_inicial, km_final, litros_gastos, preco_litro, capacidade_tanque
//   Declara variáveis quilometragem_rodada, km_por_litro, autonomia, custo_viagem
  
//   Escreva "Digite o Km inicial:"
//   Leia km_inicial
  
//   Escreva "Digite o Km final:"
//   Leia km_final
  
//   Escreva "Digite a quantidade de litros gastos:"
//   Leia litros_gastos
  
//   Escreva "Digite o preço do litro de combustível:"
//   Leia preco_litro
  
//   Escreva "Digite a capacidade do tanque:"
//   Leia capacidade_tanque
  
//   quilometragem_rodada -> km_final - km_inicial
//   km_por_litro -> quilometragem_rodada / litros_gastos
//   autonomia -> km_por_litro * capacidade_tanque
//   custo_viagem -> litros_gastos * preco_litro
  
//   Escreva "Quilometragem rodada: ", quilometragem_rodada, " km"
//   Escreva "Quilômetros por litro: ", km_por_litro, " km/l"
//   Escreva "Autonomia do veículo: ", autonomia, " km"
//   Escreva "Custo da viagem: R$", custo_viagem
  
// Fim
