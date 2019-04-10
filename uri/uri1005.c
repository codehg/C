#include <stdio.h>

int main() {
    double a, b, media, tmp; //tmp = temporaria usada como uma variavel auxiliar

    scanf("%lf %lf", &a, &b);
    
    tmp = (a + b);
    media = tmp / 2;

    printf("MEDIA = %.5lf\n", media);      

    return 0;
}

