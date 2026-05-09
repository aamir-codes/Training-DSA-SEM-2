// https://leetcode.com/problems/find-pivot-index/submissions/1998713038/
int pivotIndex(int* nums, int numsSize) {
    int total = 0;
    for(int i = 0; i < numsSize; i++){
        total = total + nums[i];
    }
    int leftsum = 0;
    for (int i = 0; i < numsSize; i++){
        total -= nums[i];
        if(leftsum == total){
            return i;
        }
        leftsum += nums[i];
    }
    return -1;
}