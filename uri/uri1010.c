#include <stdio.h>

int main() {

	int cod_um, cod_dois, qtd_um, qtd_dois;
	double valor_um, valor_dois, total;

	scanf("%d %d %lf", &cod_um, &qtd_um, &valor_um);
        scanf("%d %d %lf", &cod_dois, &qtd_dois, &valor_dois);
	
	valor_um = qtd_um * valor_um;
	valor_dois = qtd_dois * valor_dois;
	total = valor_um + valor_dois;

	printf("VALOR A PAGAR: R$ %.2lf\n", total);	

    return 0;
}
