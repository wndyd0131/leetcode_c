int maxSubArray(int* nums, int numsSize){
    int max = -10000;
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i; j < numsSize; j++) {
            sum += nums[j];
            if (sum > max)
                max = sum;
        }
        sum = 0;
    }
    return max;
}

/* 
* My solution:
* 구현: 브루트포스
* 결과: time limit exceeded
* 원인: O(N)을 요구하는데, O(NlogN)으로 실행해서 그럼
*/