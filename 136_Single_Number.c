int singleNumber(int* nums, int numsSize){
    int arr[60000] = {0,};
    for (int i = 0; i < numsSize; i++) {
        arr[30000+nums[i]] += 1;
    }
    for (int i = 0; i < 60000; i++) {
        if (arr[i] == 1) {
            return i-30000;
        }
    }
    return -30001;
}

/* 
* My solution:
* 구현: 상수의 배열을 만들어서 각 인덱스 별로 카운트 저장 후 접근
* 결과: 성공
* 원인:
*/