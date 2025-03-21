#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[20];

    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        arr[i] = num;
    }

    qsort(arr, n, sizeof(int), compare);
    int count = arr[0];
    for(int i=1;i<n;i++){
        count++;
        if(count != arr[i]){
            printf("%d",count);
        }
    }

    return 0;
}