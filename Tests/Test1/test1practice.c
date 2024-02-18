#include <stdio.h>
#include <ctype.h>
#include <string.h>

void calculateGPA(char str[], int len);

int main() {
    char grades[5] = {'A', 'b', 'c', 'D', 'f'}; 
    calculateGPA(grades, 5);
}

void calculateGPA(char str[], int len) {
    float GPA = 0.0;
    for (int i = 0; i < len; i++) {
        char grade = tolower(str[i]);
        switch (grade) {
            case 'a':
                GPA += 4.0;
                break;
            case 'b':
                GPA += 3.0;
                break;
            case 'c': 
                GPA += 2.0;
                break;
            case 'd':
                GPA += 1.0;
                break;
            case 'f':
                GPA += 0.0;
                break;
        }
    }
    GPA = GPA / len;
    printf("%f", GPA);
}