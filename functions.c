// Call the libraries
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <math.h>
#include "functions.h"

void printSecretCode(char s_code)
{
    printf("Your code in binary:");
    for ( int i = 7; i >= 0; i--)
    {
        printf("%d", (s_code >> i) & 1);
    }
    printf("\n");
}

void base16ToText(char* base16, char* text, int length)
{
    for (int i = 0; i < length; i++)
    {
        // Convert each character from base 16 to its integer value
        switch (base16[i])
        {
        case '0':
            text[i] = 0;
            break;
        
        case '1':
            text[i] = 1;
            break;

        case '2':
            text[i] = 2;
            break;

        case '3':
            text[i] = 3;
            break;
        
        case '4':
            text[i] = 4;
            break;

        case '5':
            text[i] = 5;
            break;

        case '6':
            text[i] = 6;
            break;

        case '7':
            text[i] = 7;
            break;

        case '8':
            text[i] = 8;
            break;
        
        case '9':
            text[i] = 9;
            break;

        case 'A':
            text[i] = 10;
            break;
        
        case 'B':
            text[i] = 11;
            break;

        case 'C':
            text[i] = 12;
            break;

        case 'D':
            text[i] = 13;
            break;

        case 'E':
            text[i] = 14;
            break;

        case 'F':
            text[i] = 16;
            break;

        default:
            break;
        }

        
    }
    text[length] = '\0'; // add end of line
    
}

void base2ToText(char* base2, char* text, int length)
{   
    int count = length / 8; // Calculate the length of text
    int index = 0; // Global index for base2
    int i; // Index for text
    for (i = 0; i < count; i++)
    {
        int sum = 0;
        for (double j = 7; j >= 0; j--)
        {
            if (base2[index] != '0')
            {
                sum += (int)pow(2.0,j); // Binary to integer
            }
            index ++;
        }
        text[i] = sum;
    }
    text[i] = '\0';
}

void encryption(char* text, char* encryptedText, int length, char scretCode)
{
    for (int i = 0; i < length; i++)
    {
        encryptedText[i] = text[i] ^ scretCode; // XOR operation
    }
    encryptedText[length] = '\0'; // add end of line
}

void writeFile(char* encrypted)
{
    // Open file
    FILE *f = fopen("encrypted.enc", "wb");
    
    // Error check
    if (f == NULL)
    {
        printf("Failed to open the file");
        exit(1);
    }

    // Write to file
    fprintf(f, "%s", encrypted);

    fclose(f);
}
