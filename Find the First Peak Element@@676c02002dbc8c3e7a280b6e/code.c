#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    scanf("%d",&n);

    int num1;
    scanf("&d",&num1);

    int res = -1;

    bool val = false;

    for(int i=0;i<n-1;i++){
        int num2;
        scanf("%d",&num2);

        if(num2>num1){
            num1 = num2;
            res = num2;
        }

        if(res<num2){
            val = true;
            break;
        }
    }
    if(val==false){
        res = -1;
        printf("%d",res);
    }else{
        printf("%d",res);
    }
    

    return 0;
}