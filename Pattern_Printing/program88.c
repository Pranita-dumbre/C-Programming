////////////////////////////////////////////////////////////////////
//
//  File Name :         program88.c
//  Description :       Prints a 3x3 grid of asterisks (*) in tab-separated 
//                      format using loops for repetition.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       Prints a 3x3 pattern of asterisks (*) using 
//                      for-loops to avoid repetition of code. Each 
//                      row contains 3 asterisks separated by tabs.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////

void Display()
{
    int j = 0;

    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");
    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");
    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     main
//  Description :       Entry point of the program. calls Display function.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
int main()
{

    Display();

    return 0;
}