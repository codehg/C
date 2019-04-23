#include <stdio.h>

int main() {
	
	long long int A, B, Total;

	scanf("%lld %lld", &A, &B);

	Total = B * (B+1)/2 - A * (A-1)/2;

	printf("%lld\n", Total);


	return 0;
}
