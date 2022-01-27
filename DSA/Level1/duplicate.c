#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

bool containsDuplicate(int *nums, int numsSize)
{
    if (numsSize <= 1)
        return 0;

    qsort(nums, numsSize, sizeof(int), comp);

    for (i = 1; i < numsSize; i++)
    {
        if (nums[i] == nums[i + 1])
            return 1;
    }
    return 0;
}