#include <stdio.h>
#include <ctype.h>

char* capitalize (char the_str[]) 
{

    for (int i = 0; the_str[i] != '\0'; i++) 
    {
        if (isalpha(the_str[i]) != 0) {
            the_str[i] = toupper(the_str[i]);
        }
    }

    return the_str;
}

int main() {
    char the_str[] = "test";
    capitalize(the_str);
    printf("%s\n", the_str);
    char the_str2[] = "This IS a tesT!";
    capitalize(the_str2);
    printf("%s\n", the_str2);
}