#include <stdio.h>

// Written by Nathan Weisskopf - Student ID 801167541
// ITSC 2181 - Spring 2024 

float cube_volume(float);

int main(void) {
    printf("%f", cube_volume(3.0));
}

float cube_volume(float measurement) {
    return measurement * measurement * measurement;
}