#ifndef _CS_BOX_H_
#define _CS_BOX_H_

#include <stdint.h>
#include <stddef.h>

int32_t bin_search(const uint32_t * const ptr_data,
                   const size_t           len,
                   const uint32_t         num,
                   size_t * const         ptr_idx);

#endif // _CS_BOX_H_