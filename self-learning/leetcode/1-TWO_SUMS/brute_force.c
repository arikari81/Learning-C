// #1 using brute force method

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    *returnSize = 2;
    int *result = malloc(*returnSize * sizeof(int));

    for (int i = 0; i < numsSize; i++){
        for (int j = i+1; j < numsSize; j++){
            if (nums[i] + nums[j] == target){
                result[0] = i;
                result[1] = j;
                return result;
            }else{
                return NULL;
            }
        }
    }
    
    return result;
}

int main(){

    int size = 8;
    int nums[size];
    int target;
    int returnsize = 2;

    printf("enter the numbers: \n");
    for (int i = 0; i < size; i++){
        scanf("%d", &nums[i]);
        printf("\n");
    }

    printf("the arrays is : \n");
    for (int i = 0; i < size; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("enter target value: ");
    scanf("%d", &target);

    int *res = twoSum(nums, size, target, &returnsize);

    if (res != NULL){
        printf("indices are [%d, %d]\n", res[0], res[1]);
        free(res);
        res = NULL;
    }else{
        printf("error\n");
    }

    return 0;
}