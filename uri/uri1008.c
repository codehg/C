#include <stdio.h>

int main() {
    int funcionario, horas;
    double salario;

    scanf("%d %d %lf", &funcionario, &horas, &salario);

    salario = horas * salario;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", funcionario, salario);

    return 0;
}

