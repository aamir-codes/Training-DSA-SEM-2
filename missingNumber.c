// https://leetcode.com/problems/missing-number/?envType=problem-list-v2&envId=binary-search
int missingNumber(int* nums, int numsSize) {
    int xor = numsSize;  // include n

    for (int i = 0; i < numsSize; i++) {
        xor ^= i ^ nums[i];
    }

    return xor;
}