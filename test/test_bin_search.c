#include "unity.h"

#include <stdint.h>
#include <stddef.h>
#include <string.h>

#include "algorithms_box.h"

void test_bin_search(void)
{
    uint32_t nums[17] = {0, 2, 3, 5, 8, 9, 10, 15, 17, 23, 34, 45, 2345, 4000, 12333, 34555, 999999};

    size_t idx = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 12333);
    TEST_ASSERT_EQUAL(14, idx);

    idx = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 0);
    TEST_ASSERT_EQUAL(0, idx);

    idx = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 999999);
    TEST_ASSERT_EQUAL(16, idx);
}