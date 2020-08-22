#include <stdio.h>

int main(){
    // Declarando as variaveis
    int codigo, quantidade;
    
    // Lendo a Entrada
    scanf("%d %d", &codigo, &quantidade);

    // Condicionais para cada produto
    if(codigo == 1)
        printf("Total: R$ %.2lf\n", quantidade * 4.00);
    if(codigo == 2)
        printf("Total: R$ %.2lf\n", quantidade * 4.50);
    if(codigo == 3)
        printf("Total: R$ %.2lf\n", quantidade * 5.00);
    if(codigo == 4)
        printf("Total: R$ %.2lf\n", quantidade * 2.00);
    if(codigo == 5)
        printf("Total: R$ %.2lf\n", quantidade * 1.50);

    return 0;
}