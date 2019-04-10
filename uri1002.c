#include <stdio.h>
#define pi 3.14159

int main() {
    double area, raio;

    scanf("%lf", &raio);

    raio = raio * raio;
    area = raio * pi;

    printf("A=%.4lf\n", area); 

    return 0;
}