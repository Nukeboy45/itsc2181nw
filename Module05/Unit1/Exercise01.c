#include <stdio.h>

// Written by Nathan Weisskopf - ITSC 2181 - Spring 2024

int main() {
    int value;
    int* valuePtr = &value;
    *valuePtr = 100;
    printf("%d\n", *valuePtr);

    float pi;
    float* floatPtr = &pi;
    *floatPtr = 3.1416;
    printf("%.4f\n", *floatPtr);
}