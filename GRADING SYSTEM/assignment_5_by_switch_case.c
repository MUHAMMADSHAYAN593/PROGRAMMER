#include <stdio.h>

int main() {
    int grades;
    printf("WELCOME TO THE GRADING SYSTEM\n\n");
    printf("Please enter your marks from the following list:\n");

    printf("  1. 86 marks\n");
    printf("  2. 82 marks\n");
    printf("  3. 78 marks\n");
    printf("  4. 74 marks\n");
    printf("  5. 70 marks\n");
    printf("  6. 66 marks\n");
    printf("  7. 62 marks\n");
    printf("  8. 58 marks\n");
    printf("  9. 54 marks\n");
    printf(" 10. 50 marks\n");

    scanf("%d",&grades);

    switch(grades) {
    case 86:
        printf("Grade : A+ \n GPA : 4.00");
        break;
    case 82:
        printf("Grade : A- \n GPA : 3.367");
        break;
    case 78:
        printf("Grade : B+ \n GPA : 3.33");
        break;
    case 74:
        printf("Grade : B \n GPA : 3.00");
        break;
    case 70:
        printf("Grade : B- \n GPA : 2.67");
        break;
    case 66:
        printf("Grade : C+ \n GPA : 2.33");
        break;
    case 62:
        printf("Grade : C \n GPA : 2.00");
        break;
    case 58:
        printf("Grade : C- \n GPA : 1.67");
        break;
    case 54:
        printf("Grade : D \n GPA : 1.33");
        break;
    case 50:
        printf("Grade : D- \n GPA : 1.00");
        break;
    default : printf("YOU CAN NOT SEE MORE RESULT RATHER THAN THE ABOVE LIST!");
    }

    return 0;
}
