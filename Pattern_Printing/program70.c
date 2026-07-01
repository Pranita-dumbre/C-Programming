//////////////////////////////////////////////////////////////////
//
//  File Name :         program70.c
//  Description :       Displays a square matrix pattern where 'o' is
//                      printed on and above the secondary diagonal,
//                      and '*' is printed below the secondary diagonal.
//                      The pattern is displayed only when the number
//                      of rows and columns are equal.
//  Author :            Pranita Purushottam Dumbre.
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
// Input 4  4   
/*

o       o       o       *
o       o       *       *
o       *       *       *
*       *       *       *
    
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
//  Method Name :     Display
//  Description :     prints a square matrix pattern in which 'o' appears on and 
//                    above the secondary diagonal, while '*' appears below the
//                    secondary diagonal. Otherwise, displays an
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
    if(iRow != iCol)
        {
            printf("Invalid input");
            return;
        }
    
       for(i = 1 ; i <= iRow; i++)
        {
            for(j = 1;j <= iCol ; j++)
            {
                if((i + j) > iRow)
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