#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 20
#define FIELD_LENGTH 20

// Written by Nathan Weisskopf - ITSC 2181
// Class of 2024

struct customer {
    char firstName[FIELD_LENGTH];
    char middleName[FIELD_LENGTH];
    char lastName[FIELD_LENGTH];
    char phoneNum[FIELD_LENGTH];
    float balance;
};

void printCustomerArr(struct customer customerArr[], int len) {
    printf("\n\nCustomer List:\n--------------------------------\n");
    for (int i=0; i < len; i++) {
        printf("Customer: %s %s %s\nPhone Number: %s, Balance: $%.2f\n\n--------------------------------\n", customerArr[i].firstName, customerArr[i].middleName, customerArr[i].lastName, customerArr[i].phoneNum, customerArr[i].balance);
    }
    printf("\n");
}

void lowercase (char the_str[], char lowerStr[]) 
{
    int i = 0;
    for (i; the_str[i] != '\0'; i++) 
    {
        if (isalpha(the_str[i]) != 0) {
            lowerStr[i] = tolower(the_str[i]);
        } else {
            lowerStr[i] = the_str[i];
        }
    }
    lowerStr[i] = '\0';
}

int main() {
    struct customer customerArr[MAX_LENGTH];
    int i = 0;
    int currSize = 0;
    while(1) {
        if (i > (MAX_LENGTH - 1)) {
            i = 0;
        }
        printf("Please enter the next customer record.\n    :X  Exits the Program\n    :S  Shows the contents of the database\n\n");
        printf("First Name: ");
        scanf("%19s", customerArr[i].firstName);

        char lowerStr[FIELD_LENGTH];
        lowercase(customerArr[i].firstName, lowerStr);

        if (strcmp(":x", lowerStr) == 0) {
            return 0;
        }
        if (strcmp(":s", lowerStr) == 0) {
            printCustomerArr(customerArr, currSize);
            continue;
        }

        printf("Middle Name: ");
        scanf("%19s", customerArr[i].middleName);
        printf("Last Name: ");
        scanf("%19s", customerArr[i].lastName);
        printf("Phone Number: ");
        scanf("%19s", customerArr[i].phoneNum);
        printf("Balance Due: ");
        scanf("%f", &customerArr[i].balance);
        printf("--------------------------------\n");

        i++;
        if (currSize < 19) {
            currSize++;
        }
    }
    return 0;
}