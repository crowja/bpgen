/**
 *  @file bpgen.h
 *  @version 0.0.1-dev0
 *  @date Fri Dec 13 16:11:36 CST 2019
 *  @copyright %COPYRIGHT%
 *  @brief FIXME
 *  @details FIXME
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
struct bpgen *bpgen_new(size_t n);

/**
 *  @brief Destructor.
 *  @details Clean up and free a bpgen structure.
 *  @param[in, out] p.
 */
void        bpgen_free(struct bpgen **pp);

/**
 *  @brief Initialize a bpgen object.
 *  @details FIXME longer description here ...
 *  @param[in,out] p Pointer to a bpgen object
 *  @param[in] x FIXME
    @returns FIXME
 */
int         bpgen_init(struct bpgen *p);

/**
 *  @brief Return the version of this package.
 *  @returns Version string.
 */
const char *bpgen_version(void);

#endif
