#include "unity.h"

#include <stdint.h>
#include <stddef.h>
#include <string.h>

#include "algorithms_box.h"

uint32_t nums[17] = {
    0, 2, 3, 5, 8, 9, 10, 15, 17, 23, 34, 45, 2345, 4000, 12333, 34555, 999999};

void test_bin_search_pos(void)
{
    size_t  idx;
    int32_t err = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 2345, &idx);
    TEST_ASSERT_EQUAL(0, err);
    TEST_ASSERT_EQUAL(12, idx);

    err = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 0, &idx);
    TEST_ASSERT_EQUAL(0, err);
    TEST_ASSERT_EQUAL(0, idx);

    err = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 999999, &idx);
    TEST_ASSERT_EQUAL(0, err);
    TEST_ASSERT_EQUAL(16, idx);
}

void test_bin_search_neg(void)
{
    return;
    size_t  idx;
    int32_t err = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 55, &idx);
    TEST_ASSERT_EQUAL(-1, err);

    err = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 1, &idx);
    TEST_ASSERT_EQUAL(-1, err);

    err = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 9999990, &idx);
    TEST_ASSERT_EQUAL(-1, err);
}