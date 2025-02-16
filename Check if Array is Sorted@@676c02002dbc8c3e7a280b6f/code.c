#include<stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);

    if(n==1){
        printf("Sorted");
        return;
    }

    int num1;
    scanf("%d",&num1);

    bool res = false;
    
    for(int i=0;i<n-1;i++){
        int num2;
        scanf("%d",&num2);

        if(num2>=num1){
            num1 = num2;
            res = true;
            continue;
        }
        else{
            res = false;
            break;
        }
    }

    if(res==false){
        printf("Not Sorted");
    }else{
        printf("Sorted");
    }
    return 0;
}