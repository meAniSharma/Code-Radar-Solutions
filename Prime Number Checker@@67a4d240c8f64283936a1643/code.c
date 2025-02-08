#include <stdio.h>

int isPrime(int num){
    int factor = 0;
    for(int i=0;i<n;i++){
        if(num%i==0){
            factor++;
        }
    }
    if(factor<2){
        return 1;
    }
    else{
        return 0;
    }

}

int main() {
    int n;
    scanf("%d",&n);

    while(t>0){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }

    return 0;
}