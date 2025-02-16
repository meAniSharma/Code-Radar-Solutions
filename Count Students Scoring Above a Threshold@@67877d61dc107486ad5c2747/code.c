#include<stdio.h>

int main(){
    int n;
    int count = 0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int roll;
        char name[100];
        float marks;
        float thresholdMarks;

        scanf("%d",&roll);
        scanf("%s",name);
        scanf("%f",&marks);
        scanf("%f",&thresholdMarks)

        if(thresholdMarks<marks){
            count++;
        }  

    }

    printf("Count of students scoring above %.2f: %d",thresholdMarks,count);
    return 0;   
}