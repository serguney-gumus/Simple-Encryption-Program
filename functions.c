// Call the libraries
#include<stdlib.h>
#include<stdio.h>
#include "functions.h"

char getSecretCode(char s_code)
{  
    // User input
    char ch;
    // Control loop
    int flag = 0;

    while (!flag)
    {
        // Get the secret code
        printf("Enter the secret code: ");
        scanf(" %c", &ch);

        // ASCII value
        s_code = ch;

        // Check if the netered code valid
        if (s_code >= 48 && s_code <= 57 || s_code >= 65 && s_code <= 90)
        {
            flag = 1;
        }
        else
        {
            printf("Invalid input entered!\n");
        }

    }

    // Return to the ASCII value
    return ch;
}

void printSecretCode(char s_code)
{
    printf("Your code in binary:");
    for ( int i = 7; i >= 0; i--)
    {
        printf("%d", (s_code >> i) & 1);
    }
    printf("\n");
}
