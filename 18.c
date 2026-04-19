#include <stdio.h>

// Define structure
struct student {
    int roll;
    char department[50];
    char course[50];
    int year;
};

int main() {
    struct student s[450];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Department: ");
        scanf("%s", s[i].department);

        printf("Course: ");
        scanf("%s", s[i].course);

        printf("Year of joining: ");
        scanf("%d", &s[i].year);
    }

    // Display details
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nDepartment: %s", s[i].department);
        printf("\nCourse: %s", s[i].course);
        printf("\nYear: %d\n", s[i].year);
    }

    return 0;
}
