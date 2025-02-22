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