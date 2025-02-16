#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int topRoll;
    char topName[100];
    float topMarks;

    for(int i=0;i<n;i++){
        int roll;
        char name[100];
        float marks;
        int topMarks = 0;

        
        scnaf("%d",&roll);
        scnaf("%s",name);
        scnaf("%f",marks);

        if(marks>topMarks){
            topRoll = roll;
            topName[100] = name;
            topMarks = marks;
        }

    }

    printf("Top Scorer: Roll Number: %d, Name: &s, Marks: &.2f",topRoll,topName,topMarks);

    return 0;
}