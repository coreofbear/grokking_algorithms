#include "src/algorithms_box.h"
#include "C:/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void test_bin_search(void)

{

    uint32_t nums[17] = {0, 2, 3, 5, 8, 9, 10, 15, 17, 23, 34, 45, 2345, 4000, 12333, 34555, 999999};



    size_t idx = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 12333);

    UnityAssertEqualNumber((UNITY_INT)((14)), (UNITY_INT)((idx)), (

   ((void *)0)

   ), (UNITY_UINT)(14), UNITY_DISPLAY_STYLE_INT);



    idx = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 0);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((idx)), (

   ((void *)0)

   ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);



    idx = bin_search(nums, sizeof(nums) / sizeof(uint32_t), 999999);

    UnityAssertEqualNumber((UNITY_INT)((16)), (UNITY_INT)((idx)), (

   ((void *)0)

   ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

}
