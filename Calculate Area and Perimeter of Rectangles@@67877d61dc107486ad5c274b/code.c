#include<stdio.h>

int main(){
    int n , len , width;
    scnaf("%d",&n);

    for(int i=1;i<=n;i++){
        scanf("%d",&len);
        scanf("%d",&width);

        float area = len*width;
        float peri = 2*(len+width);

        print("Reactange %d: Area = %.2f, Perimeter = %.2f",i,area,peri);
    }
    return 0;
}