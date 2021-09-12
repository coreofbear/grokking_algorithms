#include "src/cs_box.h"
#include "C:/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








uint32_t nums[17] = {

    0, 2, 3, 5, 8, 9, 10, 15, 17, 23, 34, 45, 2345, 4000, 12333, 34555, 999999};



void test_bin_search_pos(void)

{

    size_t idx;

    int32_t err = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 4000, &idx);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((err)), (

   ((void *)0)

   ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((13)), (UNITY_INT)((idx)), (

   ((void *)0)

   ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);



    err = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 0, &idx);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((err)), (

   ((void *)0)

   ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((idx)), (

   ((void *)0)

   ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT);



    err = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 999999, &idx);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((err)), (

   ((void *)0)

   ), (UNITY_UINT)(24), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((16)), (UNITY_INT)((idx)), (

   ((void *)0)

   ), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_INT);

}



void test_bin_search_neg(void)

{

    return;

    size_t idx;

    int32_t err = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 55, &idx);

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((err)), (

   ((void *)0)

   ), (UNITY_UINT)(33), UNITY_DISPLAY_STYLE_INT);



    err = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 1, &idx);

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((err)), (

   ((void *)0)

   ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT);



    err = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 9999990, &idx);

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((err)), (

   ((void *)0)

   ), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_INT);

}
