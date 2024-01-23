#include <stdio.h>
#include <stdlib.h>

// Written by Nathan Weisskopf
// ITSC 2181 - Spring 2024

int main() {
    int grade = 0;
    printf("Please enter the numeric grade: ");
    int result = scanf("%d", &grade);

    if (result > 1) {
        printf("You entered an invalid input!");
        exit(1);
    } else {
        if (grade > 100 || grade < 0) {
            printf("You entered an invalid numeric grade!");
            exit(1);
        } else {
            if (grade >= 90) {
                printf("The letter grade is an A.");
                return 0;
            } else if (grade >= 80) {
                printf("The letter grade is a B.");
                return 0;
            } else if (grade >= 70) {
                printf("The letter grade is a C.");
                return 0;
            } else if (grade >= 60) {
                printf("The letter grade is a D.");
                return 0;
            } else {
                printf("The letter grade is a F.");
                return 0;
            }
        }
    }

    return 0;
}