//#1 using hash-table method

/*
BUGGY CODE, i have yet to properly learn many of the concepts used
*/

#include <stdio.h>
#include <stdlib.h>
#define PRIME_NUM 269 //size of hashtable

typedef struct Node{ //node tohold the data, will be used to make a linked list
    int index;
    struct Node *next;
}Node;

void initHashTable(Node *ht){
    for (int i = 0; i < PRIME_NUM; i++){
        ht[i].index = -1;
        ht[i].next = NULL;
    }
}

int hash(int val){ //hash function
    return abs((val % PRIME_NUM));
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    *returnSize = 2;
    int *result = malloc(*returnSize * sizeof(int));

    Node *ht = (Node *)malloc(PRIME_NUM * sizeof(Node));

    initHashTable(ht);

    //filling the HT
    int hash_num;
    for (int i = 0; i < numsSize; i++){
        hash_num = hash(nums[i]);

        if (ht[hash_num].index == -1){ //empty slot
            ht[hash_num].index = i;
        }else{
            Node *newNode = (Node *)malloc(sizeof(Node));
            newNode->index = i;
            newNode->next = NULL;

            Node *tmp = &ht[hash_num];
            while(tmp->next != NULL){
                tmp  = tmp->next;
            }

            tmp->next = newNode;
        }
    }

    //checking ht for corresponding pair
    for (int i = 0; i < numsSize; i++){
        hash_num = hash(target - nums[i]);

        if (ht[hash_num].index == -1){
            continue;
        }

        if(nums[ht[hash_num].index] == target - nums[i] && ht[hash_num].index != i){
            result[0] = i;
            result[1] = ht[hash_num].index;
            free(ht);
            return result;
        }else{
            Node *tmp = ht[hash_num].next;
            for (; tmp != NULL;){
                if (nums[tmp->index] == target - nums[i] && tmp->index != 0){
                    result[0] = i;
                    result[1] = tmp->index;
                    free(ht);
                    return result;
                }
            }
        }
    }

    free(ht);
    return result;
}