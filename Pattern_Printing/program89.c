////////////////////////////////////////////////////////////////////
//
//  File Name :         program89.c
//  Description :       Prints a 3x3 grid of asterisks (*) using nested
//                      for-loops, where each row and column is separated
//                      by tabs for proper alignment.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       Uses nested loops to print a 3x3 pattern of
//                      asterisks (*). Outer loop controls rows and
//                      inner loop controls columns.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
void Display()
{
    int i = 0, j = 0;

    for(i = 1; i<= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
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