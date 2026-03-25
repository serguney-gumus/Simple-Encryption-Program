// This script drives program

// Call the libraries
#include<stdlib.h>
#include<stdio.h>

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
    
    // Stay in the looop until program is terminated
    while (operation != 3)
    {
        /*Menu Operations*/
        printf("Encryption!\n");
        printf("(1) Change the secret code\n");
        printf("(2) Encrypt text\n");
        printf("(3) Quit\n");
        operation = getOperation(operation);

    };
}

int getOperation(int opSelect)
{
    // Caharacter array for the input
    char input[100];
    
    // Get input
    printf("Please enter your operation(e.g. 1, 2):");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &opSelect);
    
    // Check if the entered input valid 
    if (opSelect == 1 || opSelect == 2 || opSelect == 3)
    {
        return opSelect;   
    }

    // Print error msg
    printf("Invalid input entered!\n");
    opSelect = 0;
    return opSelect;
};
