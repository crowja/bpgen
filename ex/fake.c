#include <stdlib.h>
#include <stdio.h>

int
main(void)
{
   unsigned    k = 5;
   unsigned    max = 1 << k;
   unsigned    i, j;


   for (j = 0; j < max; j++) {
      printf("%d", (0 << 0) ? 1 : 0);
      for (i = 0; i < k - 1; i++) {
         printf("\t%d", j & (1 << i) ? 1 : 0);
      }
      printf("\n");
   }

   return 0;
}
