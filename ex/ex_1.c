#include <stdlib.h>
#include <stdio.h>
#include "bpgen.h"

int
main(int argc, char *argv[])
{
   struct bpgen *z = bpgen_new(5);

   bpgen_free(&z);

   return 0;
}
