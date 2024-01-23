#include <stdio.h>
#include <stdlib.h>

// Written by Nathan Weisskopf
// ITSC 2181 - Spring 2024

int main() {
    int a = 32, b = 5, c = 8, d = 4, e = 12;

    if (b > c) {
        printf("b is greater than c\n");
    } else {
        printf("b is not greater than c\n");
    }

    if ((e/d) + 6) {
        printf("expression is not equal to 0, return is true\n");
    } else {
        printf("value equals 0, return is false\n");
    }

    if (a -= ((b > c) || (e / d)) + 6) {
        printf("expression is not equal to 0, return is true\n");
    } else {
        printf("value equals 0, return is false\n");
    }

    int value = (a -= ((b > c) || (e / d)) + 6);
    printf("%d\n", value);

    return 0;
}