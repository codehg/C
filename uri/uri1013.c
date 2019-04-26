#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c;
    int maiorAB;

    scanf("%d %d %d", &a, &b, &c);

    maiorAB = (a + b + abs(a - b)) / 2;

    if (c > maiorAB)
    {
        printf("%d eh o maior\n", c);
    }
    else
        printf("%d eh o maior\n", maiorAB);

    
    return 0;
}