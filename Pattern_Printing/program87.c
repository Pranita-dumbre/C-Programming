////////////////////////////////////////////////////////////////////
//
//  File Name :         program87.c
//  Description :       Prints a 3x3 grid of asterisks (*) in rows
//                      and columns using tabs for spacing.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       Prints a 3x3 pattern of asterisks (*) with
//                      each element separated by a tab.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////

void Display()
{
    printf("*\t");
    printf("*\t");
    printf("*\t");
    
    printf("\n");

    printf("*\t");
    printf("*\t");
    printf("*\t");
    
    printf("\n");
    printf("*\t");
    printf("*\t");
    printf("*\t");
    
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