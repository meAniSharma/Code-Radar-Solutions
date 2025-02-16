#include<stdio.h>

int main(){
    int n;
    float avgMarks = 0.0;
    float count = 0.0;
    float sumMarks = 0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int roll;
        char name[100];
        float marks;

        scanf("%d",&roll);
        scanf("%s",name);
        scanf("%f",&marks);
        count++;

        sumMarks+=marks;        

    }

    avgMarks = sumMarks/count;
    printf("Total Marks: %.2f\n",sumMarks);
    printf("Average Marks: %.2f",avgMarks);
    return 0;   
}