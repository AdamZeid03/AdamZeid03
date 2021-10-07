#include <stdio.h>
int main()
{
   int i, spacja, wysokosc, x = 0;
   printf("Podaj wysokosc trojkata: ");
   scanf("%d", &wysokosc);
   for (i = 1; i <= wysokosc; i++, x = 0)
        {
         for (spacja = 1; spacja <= wysokosc - i; ++spacja)
                {
                 printf(" ");
                }

                while (x != 2 * i - 1)
                {
                 printf("*");
                 ++x;
                }
                printf("\n");
        }
}
