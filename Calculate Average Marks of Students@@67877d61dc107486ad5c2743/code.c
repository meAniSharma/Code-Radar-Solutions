#include<stdio.h>

int main(){
    int n;
    int avgMarks = 0;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int roll;
        char name[100];
        float marks;
        int sumMarks = 0;
        float count = 0.0;

        scanf("%d",&roll);
        scanf("%s",name);
        scanf("%f",&marks);
        count++;

        sumMarks+=marks;        

    }

    avgMarks = sumMarks/count;

    return 0;   
}