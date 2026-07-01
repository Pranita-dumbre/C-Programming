//////////////////////////////////////////////////////////////////
//
//  File Name :         program102.java
//  Description :       Program to display a pattern of '*' and 'o' where
//                      the first and last rows are '*', and all middle
//                      rows are 'o'.
//  Author :            Pranita Purushottam Dumbre.
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
// Input 4  4   
/*

    *   *   *   *
    o   o   o   o
    o   o   o   o
    *   *   *   *
    
*/
#include<stdio.h>
//////////////////////////////////////////////////////////////////////
//
//  Method Name :     Display
//  Description :     Displays a matrix pattern with '*' in the first and
//                    last rows, and 'o' in the middle rows.
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
    
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if((i == 1) || (i == iRow))
                {
                    printf("*\t");
                }
                else
                {
                    printf("o\t");
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