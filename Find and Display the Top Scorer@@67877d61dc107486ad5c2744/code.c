#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    int topRoll;
    char topName[100];
    float topMarks = -1.0;

    for(int i=0;i<n;i++){
        int roll;
        char name[100];
        float marks;
        
        scanf("%d",&roll);
        scanf("%s",name);
        scanf("%f",&marks);

        if(marks>topMarks){
            topRoll = roll;
            strcpy(topName, name);
            topMarks = marks;
        }

    }

    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",topRoll,topName,topMarks);

    return 0;
}