#include<stdio.h>
#include<stdbool.h>

int peakElement(int arr[], int n){
    if (n == 1) return 0;  // Only one element
    if (arr[0] > arr[1]) return 0;  // First element is peak
    if (arr[n - 1] > arr[n - 2]) return n - 1;  // Last element is peak

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            return i;
    }
    return -1;  
}

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n-1;i++){
        int num;
        scanf("%d",&num);
        arr[i] = num;
    }
    
    int peakIndex = peakElement(arr,n);


    if (peakIndex != -1)
        printf("%d", arr[peakIndex]);
    else
        printf("-1");

    return 0;
}
