//////////////////////////////////////////////////////////////////
//
//  File Name :         program55.c
//  Description :       Program to display pattern of alphabets where 
//                      each row contains the same character repeated 
//                      across all columns.
//  Author :            Pranita Purushottam Dumbre.
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
// Input 4  4   
/*
    A   A   A   A   
    B   B   B   B
    C   C   C   C
    D   D   D   D
*/
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       Accepts number of rows and columns from user 
//                      and prints same character in each row, starting 
//                      from 'A' to next alphabets in sequence.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////

void Display(
                int iRow, 
                int iCol
            )
{
    int i = 0, j = 0;
    char ch = 'A';

        for(i = 1, ch = 'A'; i <= iRow; i++, ch++)
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t",ch);
            }
            printf("\n");
        }
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     main
//  Description :       Entry point of the program. Accepts number of
//                      rows and columns from the user and calls Display
//                      function.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}