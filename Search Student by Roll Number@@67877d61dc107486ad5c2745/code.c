#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100  // Define maximum students

// Structure to store student data
struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[MAX_STUDENTS];

    // Input student details
    for (int i = 0; i < n; i++) {
        scanf("%d", &students[i].roll);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].marks);
    }

    // Search for a student by roll number
    int searchRoll;
    scanf("%d", &searchRoll);

    int found = 0;  // Flag to check if student is found

    for (int i = 0; i < n; i++) {
        if (students[i].roll == searchRoll) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].roll, students[i].name, students[i].marks);
            found = 1;
            break;  // Stop searching after finding the student
        }
    }

    if (!found) {
        printf("Student not found");
    }

    return 0;
}
