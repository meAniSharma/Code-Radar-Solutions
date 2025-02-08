#include <stdio.h>

int isPrime(int num){
    int factor = 0;
    int one = 1;
    int zero =0;
    for(int i=0;i<num;i++){
        if(num%i==0){
            factor++;
        }
    }
    if(factor<2){
        return one;
    }
    else{
        return two;
    }

}

int main() {
    int n;
    scanf("%d",&n);

    while(t>0){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
        t--;
    }

    return 0;
}