#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[20];

    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);

        arr[i] = num;
    }

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    return 0;
}