#include <stdio.h>
#include <string.h>
#include <float.h> // For DBL_MAX

// Define the Student structure
struct Student {
    int rollNumber;
    char name;
    double marks;
};

int main() {
    int n;

    // Input the number of students
    scanf("%d", &n);
    
    // Consume the newline character left by scanf
    getchar(); 

    // Array to store student data
    struct Student students[n];

    // Input data for each student
    for (int i = 0; i < n; i++) {
        scanf("%d %s %lf", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    // Find the student with the lowest marks
    double minMarks = DBL_MAX; // Initialize with the largest possible double value
    int minIndex = -1;

    for (int i = 0; i < n; i++) {
        if (students[i].marks < minMarks) {
            minMarks = students[i].marks;
            minIndex = i;
        }
    }

    // Display the details of the student with the lowest marks
    if (minIndex!= -1) {
        printf("%d %s %.2lf\n", students[minIndex].rollNumber, students[minIndex].name, students[minIndex].marks);
    }

    return 0;
}
