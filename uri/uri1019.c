#include <stdio.h>

int main(){
    //Declarando a variavel que recebe os segundos
    int N, segundo, minuto, hora;
    
    //Lendo a entrada
    scanf("%d", &N);
    
    //Convertendo a entrada em seg. para as demais unidades
    hora = N / 3600;
    minuto = N % 3600 / 60;
    segundo = N % 60;
    
    //Imprimindo na tela
    printf("%d:%d:%d\n", hora, minuto, segundo);

    return 0;
}