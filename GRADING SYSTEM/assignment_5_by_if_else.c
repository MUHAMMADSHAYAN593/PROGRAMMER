#include <stdio.h>

int main () {
    int grade;


    printf("Welcome to the grading system\n");
    printf("ENTER MARKS TO FIND GRADE: ");
    scanf("%d", &grade);


    if (grade >= 86 && grade <= 100) {
        printf("Grade: A\nGPA: 4.00\n");
    } else if (grade >= 82 && grade <= 85) {
        printf("Grade: A-\nGPA: 3.67\n");
    } else if (grade >= 78 && grade <= 81) {
        printf("Grade: B+\nGPA: 3.33\n");
    } else if (grade >= 74 && grade <= 77) {
        printf("Grade: B\nGPA: 3.00\n");
    } else if (grade >= 70 && grade < 72) {
        printf("Grade: B-\nGPA: 2.67\n");
    }
       else if (grade >= 66 && grade < 69) {
        printf("Grade: C+\nGPA: 2.33\n");
    } else if (grade >= 62 && grade < 65) {
        printf("Grade: C\nGPA: 2.00\n");
    } else if (grade >= 58 && grade < 61) {
        printf("Grade: C-\nGPA: 1.67\n");
    } else if (grade >= 54 && grade < 57) {
        printf("Grade: D+\nGPA: 1.33\n");
    } else if (grade >= 50 && grade < 53) {
        printf("Grade: D\nGPA: 1.00\n");
    } else if (grade >= 0 && grade <= 49) {
        printf("Grade: F\nGPA: 0.00\n");
    } else {
        printf("Invalid input. Please enter a grade between 0 and 100.\n");
    }

    return 0;
}
