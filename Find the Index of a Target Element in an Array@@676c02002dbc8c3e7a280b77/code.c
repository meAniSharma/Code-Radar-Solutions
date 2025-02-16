#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        int num;
        arr[i] = num;
    }

    int find;
    scanf("%d",&find);
    for(int i=0;i<n;i++){
        if(arr[i]==find){
            printf("%d",i);
            break;
        }
    }
    return 0;
}