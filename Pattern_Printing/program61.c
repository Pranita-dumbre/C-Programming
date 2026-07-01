//////////////////////////////////////////////////////////////////
//
//  File Name :         program61.c
//  Description :       Program to display a hollow rectangle pattern where
//                      the border is made of '*' and the inner part is filled
//                      with 'o'.
//  Author :            Pranita Purushottam Dumbre.
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
// Input 4  4   
/*

    *   *   *   *
    *   o   o   *
    *   o   o   *
    *   *   *   *
    
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
//  Method Name :     Display
//  Description :     Displays the hollow rectangle pattern. Border positions
//                    print '*', while inner positions print 'o'.
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
                if((j == 1) || (j == iCol) || (i == 1) || (i == iRow))
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