#include <stdlib.h>
#include <stdio.h>

int main(void) {
   unsigned count = 19;
   unsigned k;

   printf("Breaking down %d ...\n", count);
   for (k = 0; k < 5; k++) {
      printf("Pos %d says %d\n", k, count & (1 << k) ? 1 : 0);
   }

   return 0;
}
