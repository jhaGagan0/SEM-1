#include <stdio.h>

int main() {
    int mathMarks, physicsMarks, chemistryMarks;

    // Input marks
    printf("Enter marks in Mathematics: ");
    scanf("%d", &mathMarks);
    printf("Enter marks in Physics: ");
    scanf("%d", &physicsMarks);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistryMarks);

    // Check eligibility
    if (mathMarks >= 60 && physicsMarks >= 50 && chemistryMarks >= 40) {
        printf("You are eligible for admission based on individual subject criteria.\n");
    } else if (mathMarks + physicsMarks + chemistryMarks >= 200 || (mathMarks + physicsMarks >= 150)) {
        printf("You are eligible for admission based on total marks.\n");
    } else {
        printf("Sorry, you are not eligible for admission.\n");
    }

    return 0;
}
