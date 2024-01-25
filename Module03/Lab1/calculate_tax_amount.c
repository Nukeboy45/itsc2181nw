#include <stdio.h>
#include <stdlib.h>

// Written by Nathan Weisskopf - Student ID 801167541
// ITSC 2181 - Spring 2024
int calculate_tax(float tax, float income) {
    float owed = income * tax;
    printf("Tax due = $%f", owed);

    int dependents = 0;
    printf("\nEnter the number of dependents (0 for none): ");
    scanf("%d", &dependents);
    
    float credit = 0.0;
    if (dependents >= 0 && dependents < 5) {
        credit = 450.0 * dependents;
    } else {
        credit = 2250.0;
    }

    printf("Tax credit = $%f", credit);

    owed = owed - (credit);

    printf("\nAdjusted Tax = $%f", owed);

    return 0;
}

int main() {
    float income = 0.0;

    printf("Enter income: ");   
    scanf("%f", &income);

    float tax = 0.0;

    if (income < 0) {
        exit(1);
    } else {
        if (income < 9275.00) {
            tax = 0.12;
        } else if (income < 37650) {
            tax = 0.17;
        } else if (income < 91150) {
            tax = 0.27;
        } else if (income < 190150) {
            tax = 0.3;
        } else {
            tax = 0.35;
        }
    }
    calculate_tax(tax, income);
    return 0;
}