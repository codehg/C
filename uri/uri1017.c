#include <stdio.h>

int main(){
    // Declarando as variaveis
    int horas, velocidade;
    double litros, distancia;

    // Lendo a Entrada
    scanf("%d %d", &horas, &velocidade);

    // Calculando a distancia 
    distancia = velocidade * horas; 

    // Usando o resultado da distancia para calcular os litros
    litros = distancia / 12; 

    // Use %.3 p/ mostrar 3 casas apos virgula + o tipo de dado
    printf("%.3lf\n", litros);

    return 0;
}