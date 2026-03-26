// This script drives program

// Call the libraries
#include<stdlib.h>
#include<stdio.h>
#include "functions.h"

// Function gets integer input from user
int getOperation(int);
// Function operates menu
void menu(void);

// Main function

int main ()
{
    menu();
    return 0;
};

void menu(void)
{
    int operation = 0;

    // Default code
    int secretCode = 65;
    
    // Stay in the looop until program is terminated
    while (operation != 4)
    {
        /*Menu Operations*/
        printf("Encryption!\n");
        printf("(1) Change the secret code\n");
        printf("(2) Encrypt text\n");
        printf("(3) Write encrypted text\n");
        printf("(4) Quit\n");
        
        // Get operation
        operation = getOperation(operation);
        switch (operation)
        {
        case 1:
            secretCode = getSecretCode(secretCode);
            break;
        case 2:
            /**/
            break;
        case 3:
            /**/;
            break;
        default:
            break;
        }

        printf("\n%d\n", secretCode);
    }
};

int getOperation(int opSelect)
{
    // Get input
    printf("Please enter your operation(e.g. 1, 2):");
    scanf("%d", &opSelect);
    
    // Check if the entered input valid 
    if (opSelect > 0 && opSelect < 5)
    {
        return opSelect;
    }

    // Print error msg
    printf("Invalid input entered!\n");
    opSelect = 0;
    return opSelect;
};
