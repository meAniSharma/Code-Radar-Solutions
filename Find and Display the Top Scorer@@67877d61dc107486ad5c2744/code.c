#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int roll;
        char name[100];
        float marks;
        int topMarks = 0;

        scnaf("%d",&roll);
        scnaf("%s",name);
        scnaf("%f",marks);

        if(marks>topMarks){
            int topRoll = roll;
            char topName[100] = name;
            float topMarks = marks;
        }

    }

    printf("Top Scorer: Roll Number: %d, Name: &s, Marks: &.2f",toproll,topname,topmarks);

    return 0;
}