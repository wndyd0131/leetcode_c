void moveZeroes(int* nums, int numsSize){
    int next = 0;
    int cnt = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0)
            cnt += 1;
        else{
            nums[next] = nums[i];
            next++;
        }
    }
    for (int j = numsSize-cnt; j < numsSize; j++) {
        nums[j] = 0;
    }
    for (int i = 0; i < numsSize; i++) {
        printf("%d", nums[i]);
    }
}

/* 
* My solution:
* 구현: 0이 아니면 next++가 가리키고 있는 인덱스에 삽입, 0이면 카운트만 하기, 루프 다 돌고 0의 개수의 인덱스부터 0을 삽입하기
* 결과: 성공
* 원인:
*/