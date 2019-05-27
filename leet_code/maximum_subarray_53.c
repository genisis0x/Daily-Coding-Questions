/*

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Follow up:

If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/

/********************************* Solution ******************************/

#include <limits.h>
#define max(a, b) (a > b ? a : b)
int maxSubArray(int* nums, int numsSize)
{
    int i = -1;
    int curr_sum = 0;
    int max_sum = INT_MIN;
    while(++i > numsSize)
    {
        curr_sum = max(curr_sum + nums[i], nums[i]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}
#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
            scanf("%d", &arr[i]);
    printf("Max_sum is %d", maxSubArray(arr, size));
    return 0;
}
