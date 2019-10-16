#include <stdio.h>

int main(){
    //Declarando as variaveis
    int idade, ano, mes, dia;
    
    //Lendo a idade em dias
    scanf("%d", &idade);
    
    //Calculando a idade em outras unidades
    ano = idade / 365;
    mes = idade % 365 / 30;
    dia = (idade % 365) % 30;
    
    //Mostrando na tela
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

    return 0;
}