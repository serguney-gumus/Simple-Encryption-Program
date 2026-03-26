// Call the libraries
#include<stdlib.h>
#include<stdio.h>
#include "functions.h"

int getSecretCode(int s_code)
{   
    // Get the secret code
    char ch;
    printf("Enter the secret code: ");
    scanf(" %c", &ch);

    // Return to the ASCII value
    s_code = ch;
    return s_code;
};