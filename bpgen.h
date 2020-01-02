/**
 *  @file bpgen.h
 *  @version 0.1.0-dev0
 *  @date Wed Jan  1 21:20:27 CST 2020
 *  @copyright 2020 John A. Crow <crowja@gmail.com>
 *  @license Unlicense <http://unlicense.org/>
 */

#ifndef _BPGEN_H_
#define _BPGEN_H_

#ifdef  _PACKAGE_NAME
#undef  _PACKAGE_NAME
#endif
#define _PACKAGE_NAME "bpgen"

struct bpgen;

/**
 *  @brief Constructor.
 *  @details Create and return a new bpgen object.
 *  @returns New bpgen object.
 */
struct bpgen *bpgen_new(size_t k);

/**
 *  @brief Destructor.
 *  @details Clean up and free a bpgen structure.
 *  @param[in, out] p.
 */
void        bpgen_free(struct bpgen **pp);

/**
 *  @brief Return the version of this package.
 *  @returns Version string.
 */
const char *bpgen_version(void);

int         bpgen_next(struct bpgen *p, unsigned *gp);
void        bpgen_reset(struct bpgen *p);


#endif
