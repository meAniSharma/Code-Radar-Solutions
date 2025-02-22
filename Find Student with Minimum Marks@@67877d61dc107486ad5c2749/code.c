#include <stdio.h>
#include <string.h>
#include <float.h> 

struct Student {
    int rollNumber;
    char name[50];
    double marks;
};

int main() {
    int n;
    scanf("%d", &n);
    getchar(); 
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %lf", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    
    double minMarks = DBL_MAX; 
    int minIndex = -1;

    for (int i = 0; i < n; i++) {
        if (students[i].marks < minMarks) {
            minMarks = students[i].marks;
            minIndex = i;
        }
    }

    if (minIndex != -1) {
        printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2lf\n", 
               students[minIndex].rollNumber, students[minIndex].name, students[minIndex].marks);
    }

    return 0;
}
