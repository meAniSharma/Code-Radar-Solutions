#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int num1;
    scanf("%d",&num1);

    int max = num1;
    int min = num1;

    for(int i=1;i<n;i++){
        int num;
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }

    printf("%d %d",min,max);

    return 0;
}