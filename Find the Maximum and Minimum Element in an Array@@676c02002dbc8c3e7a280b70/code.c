#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int num1;
    scanf("%d";&num1);

    int max = num1;
    int min = num1;

    for(int i=1;i<n-1;i++){
        int num2;
        scanf("%d",&num2);

        if(num2>num1){
            max = num2;
        }
    }

    for(int i=1;i<n-1;i++){
        int num;
        scanf("%d",&num);

        if(num<num1){
            min = num;
        }
    }

    printf("%d %d",min,max);

    return 0;
}