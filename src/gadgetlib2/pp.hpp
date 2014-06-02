/** @file
 *******************************************************************************
 Declaration of PublicParams for Fp field arithmetic
 *******************************************************************************
 * @authors    Eli Ben-Sasson, Alessandro Chiesa, Daniel Genkin,
 *             Shaul Kfir, Eran Tromer, Madars Virza.
 * This file is part of libsnark, developed by SCIPR Lab <http://scipr-lab.org>.
 * @copyright  MIT license (see LICENSE file)
 *******************************************************************************/

#ifndef LIBSNARK_GADGETLIB2_INCLUDE_GADGETLIB2_PP_HPP_
#define LIBSNARK_GADGETLIB2_INCLUDE_GADGETLIB2_PP_HPP_

#include "common/types.hpp"

#include <memory>
#include <vector>

namespace gadgetlib2 {

/*************************************************************************************************/
/*************************************************************************************************/
/*******************                                                            ******************/
/*******************                        R1P World                           ******************/
/*******************                                                            ******************/
/*************************************************************************************************/
/*************************************************************************************************/

/* curve-specific public parameters */
typedef libsnark::Fr<libsnark::default_pp> Fp;

typedef std::vector<Fp> FpVector;

class PublicParams {
public:
    size_t log_p;
    PublicParams(const std::size_t log_p);
    Fp getFp(long x) const; // to_support changes later
    ~PublicParams();
};

PublicParams initPublicParamsFromDefaultPp();

} // namespace gadgetlib2
#endif // LIBSNARK_GADGETLIB2_INCLUDE_GADGETLIB2_PP_HPP_
