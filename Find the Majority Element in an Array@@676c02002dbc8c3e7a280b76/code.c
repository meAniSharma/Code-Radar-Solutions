#include<stdio.h>

#define MAX = 1000;

int majorityEle(int arr[],int n){
    int freq[MAX] = {0};
    int res = 0;
    int count = 0;

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > n/2) {
            res = arr[i];
            freq[arr[i]] = 0;
            count+=1;
        }
    }

    if(count==1){
        printf("%d",res);
    }else{
        printf("-1");
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);

        arr[i] = num;
    }    

    majorityEle(arr, n);
    return 0;
}