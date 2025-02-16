#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        arr[i] = num;
    }

    int k;
    scanf("%d",&k);

    k = k % n;  // Handle cases where k >= n
    int temp[k];

    // Store last k elements
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift remaining elements right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy stored elements to the beginning
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    

    return 0;
}