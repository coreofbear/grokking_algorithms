#include "algorithms_box.h"

/**
 * @brief       Binary search
 * 
 * @param[in]   ptr_data    Data pointer
 * @param       len         Data length
 * @param       num         Searching number
 * @param[out]  ptr_idx     Number index pointer
 * 
 * @retval      size_t      Index of founded number
 */
int32_t bin_search(const uint32_t * const ptr_data, const size_t len, const uint32_t num, size_t * const ptr_idx)
{
    size_t low_idx = 0;
    size_t high_idx = len;
    size_t mid_idx = (low_idx + high_idx) / 2;

    while (((high_idx - low_idx) != 1) && 
            (ptr_data[mid_idx] != num))
    {
        if (ptr_data[mid_idx] > num)
        {
            high_idx = mid_idx;
        }
        else
        {
            low_idx = mid_idx;
        }

        mid_idx = (low_idx + high_idx) / 2;
    }

    if (ptr_data[mid_idx] != num)
    {
        return -1;
    }

    (* ptr_idx) = mid_idx;
    return 0;
}