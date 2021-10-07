#include <stdio.h>
#include <math.h>
int main()
{
 float a, b, c, x, y, z, delta;
 scanf("%f", &a);
 scanf("%f", &b);
 scanf("%f", &c);
 /* Teraz program musi policzyc delte */
 delta = b*b - 4*a*c;
 if(delta < 0)
        {
         printf("Nie ma rozwiazania w zbiorze liczb rzeczywistych\n");
        }
 if(delta == 0)
        {
         x = -(b/2*a);
         printf("Rownanie posiada jedno rozwiazanie x = %f\n", x);
        }
 if(delta > 0)
        {
         y = -(b + sqrt(delta)) / (2*a);
         z = (sqrt(delta) - b) / (2*a);
         printf("Rownanie posiada dwa rozwiazania x1 = %f oraz x2 = %f\n", y, z);
        }
}

