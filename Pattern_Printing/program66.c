//////////////////////////////////////////////////////////////////
//
//  File Name :         program66.c
//  Description :       Displays a left-aligned right-angled triangle
//                      pattern using '*' characters.
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
//  Description :     prints a left-aligned right-angled triangle
//                    using '*' characters. The number of '*' printed
//                    in each row is equal to the current row number.
//  Author :          Pranita Purushottam Dumbre
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