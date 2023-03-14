void quickSort(int *array, int start, int end)
{
    if (start >= end)
        return;
    int temp = 0;
    int pivot = start;
    int left = start + 1;
    int right = end;
    while (left <= right) {
        while (left <= end && array[left] <= array[pivot])
        left++;
        while (right > start && array[right] >= array[pivot])
        right--;
        if (left > right) {
            temp = array[right];
            array[right] = array[pivot];
            array[pivot] = temp;
        }
        else {
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
        }
    }
    quickSort(array, start, right-1);
    quickSort(array, right+1, end);
}

int majorityElement(int* nums, int numsSize){
    quickSort(nums, 0, numsSize-1);
    return nums[numsSize/2];
}

/* 
* My solution:
* 구현: 정렬 한 뒤, 배열[numsSize/2]를 꺼내보면 가장 많이 나온 수가 나올 것임 
* 결과: time limit exceeded
* 원인: 최악의 경우 정렬된 배열에 대해서 O(n^2)이 걸림
*/