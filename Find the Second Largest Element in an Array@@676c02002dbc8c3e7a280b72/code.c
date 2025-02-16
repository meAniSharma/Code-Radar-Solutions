#include<stdio.h>
#include<limits.h>

void findSecondLargest(int arr[], int n) {
    if (n < 2) {
        printf("-1");
        return;
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {  // New largest element found
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {  // Second largest check
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("-1");
    } else {
        printf("%d",second);
    }
}


int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findSecondLargest(arr, n);
    return 0;
}