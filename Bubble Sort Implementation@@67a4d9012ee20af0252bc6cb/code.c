#include <stdio.h>

void bubblesort(arr,n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            arr[i],arr[i+1]=arr[i+1],arr[i];
        }
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    for(j=0;j<n;j++){
        printf(" %d",arr[j]);
    }
    return 0;
}