/**
 *  @file bpgen.c
 *  @version 0.2.0-dev0
 *  @date Sun Feb 16, 2020 03:52:19 PM CST
 *  @copyright 2020 John A. Crow <crowja@gmail.com>
 *  @license Unlicense <http://unlicense.org/>
 */

#include <stdlib.h>
#include <stdio.h>                               /* FIXME */
#include <string.h>                              /* FIXME */
#include "bpgen.h"

#ifdef  IS_NULL
#undef  IS_NULL
#endif
#define IS_NULL(p)   ((NULL == (p)) ? (1) : (0))

#ifdef  FREE
#undef  FREE
#endif
#define FREE(p)      ((NULL == (p)) ? (0) : (free((p)), (p) = NULL))

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
   if (IS_NULL(tp))
      return NULL;

   tp->k = k;
   tp->count = 0;
   tp->max = (1 << (k - 1)) - 1;

   return tp;
}

void
bpgen_free(struct bpgen **pp)
{
   FREE(*pp);
   *pp = NULL;
}

const char *
bpgen_version(void)
{
   return "0.2.0-dev0";
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

void
bpgen_reset(struct bpgen *p)
{
   p->count = 0;
}

#undef  IS_NULL
#undef  FREE
