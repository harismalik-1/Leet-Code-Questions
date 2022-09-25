#include <stdio.h>
#include <stdlb.h>
#include <string.h>

#ifndef __testing__

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    for (int i = 0; i < numsSize-1; i++)
    {
        for(int j = 1; j < numsSize; j++)
        {
            //printf("sum = %d\n", *(nums+i)+*(nums+j));
            if (*(nums+i)+*(nums+j) == target)
            {
                returnSize = (int*)malloc(2*sizeof(int));
                *(returnSize) = i;
                *(returnSize+1) = j;
                return returnSize;
            }
        }
    }
    return 0;
}

int main()
{	
	int nums[4] ={1, 2, 3, 4};

	target = 4;
	numsSize = 4;
	int *p = &nums;
	int* returnSize = NULL; 

	twoSum(p, numsSize, target, returnSize);

    for (int i = 0; i<4; i++)
    {
    	printf("sum = %d amd %d\n",*(returnSize), *(returnSize+1));
    }
    return 0;
}
