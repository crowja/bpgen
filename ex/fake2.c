#include <stdlib.h>
#include <stdio.h>

int
main(void)
{
   unsigned    k = 5;                       /* k slots to select from */
   unsigned    max = 1 << (k - 1);          /* keep the first slot assigned to zero */
   unsigned    i, j;

   printf("For k = %d there are %d distinct possibilities\n", k, max - 1);

   for (j = 0; j < max - 1; j++) {
      printf("%d", 0);
      for (i = 0; i < k - 1; i++)
         printf("\t%d", (j + 1) & (1 << i) ? 1 : 0);
      printf("\n");
   }

   return 0;
}
