#include <stdio.h>

// Written by Nathan Weisskopf
// ITSC 2181 - Spring 2024

int main() {
    float arr[5];

    int length = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<length; i++) {
        scanf("%f", &arr[i]);
    }

    float sum = 0.0;
    float avg = 0.0;

    for (int i=0; i<length; i++) {
        sum = sum + arr[i];
    }

    avg = sum / (float)length;

    printf("%f", avg);
    
    return 0;
}