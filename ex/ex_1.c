#include <stdlib.h>
#include <stdio.h>
#include "bpgen.h"

#define N  6 

int
main(int argc, char *argv[])
{
   struct bpgen *z = bpgen_new(N);
   unsigned g[N];

   while (bpgen_next(z, g)) {
      int i;
      for (i = 0; i < N; i++)
         printf("%d\t", g[i]);
      printf("\n");
   }

   bpgen_free(&z);

   return 0;
}
