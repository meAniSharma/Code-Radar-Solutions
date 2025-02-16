#include <stdio.h>

#define MAX 1001  // Assuming values are between 0-1000

void countFrequency(int arr[], int n) {
    int freq[MAX] = {0};

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 0) {
            printf("%d %d\n", arr[i], freq[arr[i]]);
            freq[arr[i]] = 0;  // Mark as printed
        }
    }
}

int main() {
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);

        arr[i]= num;
    }

    countFrequency(arr, n);
    return 0;
}
