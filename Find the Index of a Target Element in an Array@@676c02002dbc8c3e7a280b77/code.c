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

    int find;
    scanf("%d",&find);
    for(int i=0;i<n;i++){
        if(arr[i]==find){
            return i;
        }
    }
    printf("-1");
    return 0;
}