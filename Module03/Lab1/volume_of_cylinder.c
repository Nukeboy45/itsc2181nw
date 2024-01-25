#include <stdio.h>
#include <stdlib.h>

// Written by Nathan Weisskopf - Student ID 801167541
// ITSC 2181 - Spring 2024

int main() {
    float r = 0.0;
    float h = 0.0;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Enter height: ");
    scanf("%f", &h);
    float v = 3.14159 * (r * r) * h;

    printf("Volume: %f", v);

    return 0;
}