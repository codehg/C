#include <stdio.h>
#define pi 3.14159

int main() {
	
	double Raio, Volume;

	scanf("%lf", &Raio);

	Raio = ((Raio * Raio) * Raio); 			//Elevando o Raio ao cubo
	Volume = (4.0/3) * pi * Raio;			//Aplicando a formula do volume
	
	printf("VOLUME = %.3lf\n", Volume);

	return 0;
}
