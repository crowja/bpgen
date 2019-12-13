/**
 *  @file bpgen.c
 *  @version 0.0.2-dev0
 *  @date Fri Dec 13 16:11:36 CST 2019
 *  @copyright %COPYRIGHT%
 *  @brief FIXME
 *  @details FIXME
 */

#include <stdlib.h>
#include <stdio.h>                               /* FIXME */
#include <string.h>                              /* FIXME */
#include "bpgen.h"

#ifdef  _IS_NULL
#undef  _IS_NULL
#endif
#define _IS_NULL(p)   ((NULL == (p)) ? (1) : (0))

#ifdef  _FREE
#undef  _FREE
#endif
#define _FREE(p)      ((NULL == (p)) ? (0) : (free((p)), (p) = NULL))

struct bpgen {
   size_t      n;                           /* n items */
   unsigned    count;
   unsigned    max;
};

struct bpgen *
bpgen_new(size_t n)
{
   struct bpgen *tp;

   tp = (struct bpgen *) malloc(sizeof(struct bpgen));
   if (_IS_NULL(tp))
      return NULL;

   tp->n = n;
   tp->count = 0;
   tp->max = 1 << (n - 1);
   printf("USING A MAX OF %d\n", tp->max);

   return tp;
}

void
bpgen_free(struct bpgen **pp)
{

   /* Do some magic here ... */

   _FREE(*pp);
   *pp = NULL;
}

int
bpgen_init(struct bpgen *p)
{

   /* Do some magic here ... */

   return 0;
}

const char *
bpgen_version(void)
{
   return "0.0.2-dev0";
}

int
bpgen_next(struct bpgen *p)
{

}

#undef  _IS_NULL
#undef  _FREE
