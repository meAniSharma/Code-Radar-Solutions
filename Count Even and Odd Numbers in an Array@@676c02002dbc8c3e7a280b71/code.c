#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int odd=0,even=0;

    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&n);

        if(num%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("%d %d",even,odd);

    return 0;
}