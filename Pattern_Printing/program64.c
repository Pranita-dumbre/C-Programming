//////////////////////////////////////////////////////////////////
//
//  File Name :         program64.c
//  Description :       Displays a lower triangular matrix pattern
//                      where 'o' is printed on and below the main
//                      diagonal, and '*' is printed above the main
//                      diagonal
//  Author :            Pranita Purushottam Dumbre.
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
// Input 4  4   
/*

    o   *   *   *
    o   o   *   *
    o   o   o   *
    o   o   o   o
    
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
//  Method Name :     Display
//  Description :     Prints a matrix pattern in which the main
//                    diagonal contains 'o' and all remaining
//                    positions contain '*'.
//  Author:           Pranita Purushottam Dumbre.
//  Date :            11/06/2026 
//
////////////////////////////////////////////////////////////////////
void Display(
                int iRow, 
                int iCol
            )
{
    int i = 0, j = 0;
    
        for(i = 1 ; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i >= j)
                {
                    printf("o\t");
                }
                else
                {
                    printf("*\t");
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