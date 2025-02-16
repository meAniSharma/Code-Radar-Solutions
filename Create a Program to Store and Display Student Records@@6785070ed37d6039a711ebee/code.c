#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int roll,
        char name[100];
        float marks;
        scanf("%d",&roll);
        scanf("%s",name);
        scanf("%f",&marks);
        printf("Roll Number: %d, Name: %s, Marks: &.2f",roll,name,marks);
    }

    return 0;   
}