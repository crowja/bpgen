#include <stdlib.h>
#include <stdio.h>
#include <float.h>
#include <math.h>
#include <string.h>
#include "bpgen.h"
#include "t/tinytest.h"
#include "t/tinyhelp.h"

static void
test_constr(void)
{
   struct bpgen *z;

   fprintf_test_info(stdout, "test_constr", "bpgen_new, bpgen_free");
   z = bpgen_new(5);
   ASSERT("Constructor test", z);
   bpgen_free(&z);
   ASSERT_EQUALS(NULL, z);
}

#if 0                                            /* 12 yy */
static void
test_stub(void)
{
   struct bpgen *z;

   fprintf_test_info(stdout, "test_stub", NULL);
   z = bpgen_new();
   ASSERT("Constructor test, pt 1", z);
   ASSERT_EQUALS(10, 10);
   bpgen_free(z);
   ASSERT_EQUALS(NULL, z);
}
#endif

int
main(void)
{
   printf("%s\n", bpgen_version());
   RUN(test_constr);
   return TEST_REPORT();
}
