//////////////////////////////////////////////////////////////////
//
//  File Name :         program69.c
//  Description :       Displays a left-aligned right-angled triangle
//                      pattern using '*' characters. The pattern is
//                      printed only when the number of rows and
//                      columns are equal; otherwise, an "Invalid input"
//                      message is displayed.
//  Author :            Pranita Purushottam Dumbre.
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
// Input 4  4   
/*

    *   
    *   *   
    *   *   *   
    *   *   *   *
    
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
//  Method Name :     Display
//  Description :    Validates that the number of rows and columns
//                   are equal. If valid, prints a left-aligned
//                   right-angled triangle using '*' characters;
//                   otherwise, displays an "Invalid input" message.
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
            for(j = 1; j <= iCol; j++)
            {
                if(i >= j)
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
//  Description :       Entry point of the program. Accepts the number
//                      of rows and columns from the user and invokes
//                      the Display function to print the required
//                      triangle pattern.
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