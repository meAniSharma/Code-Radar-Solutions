#include<stdio.h>

int main(){
    int n;
    float len;
    float width;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        scanf("%f",&len);
        scanf("%f",&width);

        float area = len*width;
        float peri = 2*(len+width);

        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i,area,peri);
    }
    return 0;
}