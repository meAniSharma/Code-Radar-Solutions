#include <stdio.h>

int isPrime(int num){
    if (num <= 1) return 0;
    int factor = 0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            factor++;
        }
    }
    if(factor<=1){
        return 1;
    }
    else{
        return 0;
    }

}

int main() {
    int t;
    scanf("%d",&n);

    while(t>0){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
        t--;
    }

    return 0;
}