#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int longestConsecutive(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    qsort(nums, numsSize, sizeof(int), compare);

    int maxLength = 1;
    int currentLength = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1] + 1) {
            currentLength++;
        } else if (nums[i] != nums[i - 1]) {
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            currentLength = 1;
        }
    }

    if (currentLength > maxLength) {
        maxLength = currentLength;
    }

    return maxLength;
}

int main() {
    int n;
    scanf("%d", &n);

    int* nums = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = longestConsecutive(nums, n);
    printf("%d\n", result);

    free(nums);
    return 0;
}
