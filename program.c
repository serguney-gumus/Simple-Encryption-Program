// This script drives program

// Call the libraries
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <unistd.h>
#include "functions.h"

// Function gets secret code
char getSecretCode(char);
// Function gets integer input from user
int getOperation(int);
// Function operates program
void program(void);
// Function reads text
void readString(char *, int);

// Main function

int main ()
{
    // Call program
    program();
    return 0;
};

void program(void)
{
    /*Define veriables*/
    int operation = 0; // operation selector
    char secretCode = 'A'; // Default code
    char buffer[100]; // User input
    char text[100]; // Text
    char encrypText[100]; // Encrypted text
    
    // Stay in the looop until program is terminated
    while (operation != 5)
    {
        /*Menu Operations*/
        printf("Encryption!\n");
        printf("(1) Change the secret code\n");
        printf("(2) Encrypt text (base 16)\n");
        printf("(3) Encrypt text (base 2)\n");
        printf("(4) Write encrypted text\n");
        printf("(5) Quit\n");
        
        // Get operation
        operation = getOperation(operation);
        switch (operation)
        {
        case 1:
            secretCode = getSecretCode(secretCode);
            printSecretCode(secretCode);
            break;
        case 2:
            // Read input
            readString(buffer, 100);
            int length = strlen(buffer); // input length
            
            // Convert base 16 to character
            base16ToText(buffer, text, length);

            // Encrypt text
            encryption(text, encrypText, length, secretCode);
            break;
        case 3:
            /**/;
            break;
        default:
            break;
        }

        printf("\n-----------\n");
    }
};

int getOperation(int opSelect)
{
    // Get input
    char buffer[100];
    printf("Please enter your operation(e.g. 1, 2):");
    fgets(buffer, sizeof(buffer), stdin); 
    opSelect =  atoi(buffer);
    
    // Check if the entered input valid 
    if (opSelect > 0 && opSelect <= 5)
    {
        return opSelect;
    }

    // Print error msg
    printf("Invalid input entered!\n");
    opSelect = 0;
    return opSelect;
};

void readString(char *str, int size)
{
    fgets(str, size, stdin); // Read string
    str[strcspn(str, "\n")] = '\0'; // Remove new line
}

char getSecretCode(char s_code)
{  
    // User input
    char ch;
    // Control loop
    int flag = 0;

    while (!flag)
    {
        // Get the secret code
        char buffer[100];
        printf("Enter the secret code: ");
        fgets(buffer, sizeof(buffer), stdin);
        ch = buffer[0];

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