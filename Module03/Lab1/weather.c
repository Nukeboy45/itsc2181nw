#include <stdio.h>
#include <stdlib.h>

// Written by Nathan Weisskopf - Student ID 80116751
// ITSC 2181 - Spring 2024

int main() {
    int temp = 0.0;

    int maxDay = 0;
    int maxTemp = 0.0;

    printf ("You will be asked to enter the daily high temperature for 10 consecutive days.\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter a high temperature: ");
        scanf("%d", &temp);

        if (temp > maxTemp) {
            maxTemp = temp;
            maxDay = i + 1;
        }
    }

    printf("The highest recorded temperature in the 10-day period was: %d degrees", maxTemp);
    printf("\nLast recorded on: Day %d", maxDay);
}