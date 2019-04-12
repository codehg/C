#include <stdio.h>
#include <math.h>

int main ()
{
  double x1, x2, y1, y2;

  scanf("%lf%lf", &x1, &y1);
  scanf("%lf%lf", &x2, &y2);

  double p1 = (x2 - x1) * (x2 - x1);
  double p2 = (y2 - y1) * (y2 - y1);
  double distancia = sqrt(p1 + p2);

  printf("%.4lf\n", distancia);

  return 0;
}
