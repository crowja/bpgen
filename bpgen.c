/**
 *  @file bpgen.c
 *  @version 0.0.2-dev0
 *  @date Fri Dec 13 22:03:06 CST 2019
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
   size_t      k;                           /* n items */
   unsigned    count;
   unsigned    max;
};

struct bpgen *
bpgen_new(size_t k)
{
   struct bpgen *tp;

   tp = (struct bpgen *) malloc(sizeof(struct bpgen));
   if (_IS_NULL(tp))
      return NULL;

   tp->k = k;
   tp->count = 0;
   tp->max = (1 << (k - 1)) - 1;
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
bpgen_next(struct bpgen *p, unsigned *gp)
{
   unsigned    i;

   if (p->count == p->max)
      return 0;

   p->count += 1;
   gp[0] = 0;
   for (i = 0; i < p->k - 1; i++)
      gp[i + 1] = p->count & (1 << i) ? 1 : 0;
   return 1;
}

#undef  _IS_NULL
#undef  _FREE
