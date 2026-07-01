///////////////////////////////////////////////////////////////////
//
//  File Name :         Program51.c
//  Description :       Program to display a rectangular pattern 
//                      of numbers and '*' symbols alternately in each row.
//                      Odd columns display numbers and even columns display '*'
//  Author :            Pranita Purushottam Dumbre.
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
// Input 4  4   
/*
    1   *   3   *
    1   *   3   *
    1   *   3   *
    1   *   3   *
*/

#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       Accepts number of rows and columns as input 
//                      and prints a pattern where odd columns show 
//                      column numbers and even columns show '*'.
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

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if((j % 2) == 0)
                {
                    printf("*\t");
                }
                else
                {
                    printf("%d\t",j);
                }
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