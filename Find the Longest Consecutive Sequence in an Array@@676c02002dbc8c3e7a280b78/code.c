#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    int arr[20];

    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);

        arr[i] = num;
    }

    for(int i=1;i<n;i++){
        
        if(arr[i]>arr[i-1]){
            count+=1;
        }else{
            count=0;
        }
    }

    return count;
}