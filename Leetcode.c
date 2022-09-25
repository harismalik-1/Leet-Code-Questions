#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    for (int i = 0; i < numsSize-1; i++)
    {
        for(int j = 1; j < numsSize; j++)
        {
            if (*(nums+i)+*(nums+j) == target)
            {
                returnSize = (int*)malloc(2*sizeof(int));
                *(returnSize) = i;
                *(returnSize+1) = j;
                return returnSize;
            }
        }
    }
    return NULL;
}

int main()
{	
	int nums[7] ={1, 2, 3, 4, 5, 7, 27};

	int target = 32;
	int numsSize = 7;
	int *p = NULL;
    p = nums;
	int* returnSize = NULL; 

	int* x = NULL;
    x = twoSum(p, numsSize, target, returnSize);

    if (x != NULL)
    {
        printf("sum = %d and %d\n",*(x), *(x+1));
    }
    else
    {
        printf("Not found\n");
    }
    return 0;
}
