/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int compare(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* arr = (int*)malloc(2 * sizeof(int));
    for(int i = 0; i < numsSize - 1; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                *returnSize = 2;
                arr[0] = i;
                arr[1] = j;
                return arr;
            }
        }
    }
    return NULL;
}