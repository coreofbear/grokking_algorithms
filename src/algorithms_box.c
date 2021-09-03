#include "algorithms_box.h"

size_t bin_search(const uint32_t * const ptr_data, const size_t len, const uint32_t num)
{
    size_t low = 0;
    size_t high = len;
    size_t mid = (low + high) / 2;

    while (ptr_data[mid] != num)
    {
        if (ptr_data[mid] > num)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }

        mid = (low + high) / 2;
    }

    return mid;
}