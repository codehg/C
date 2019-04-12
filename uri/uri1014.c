#include <stdio.h>

int main() {
	
	int km;
	float litro;

	scanf("%d %f", &km, &litro);

	printf("%.3f km/l\n", km/litro);

	return 0;

}
