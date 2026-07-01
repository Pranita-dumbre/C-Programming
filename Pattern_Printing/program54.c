//////////////////////////////////////////////////////////////////
//
//  File Name :         program98.java
//  Description :       Program to display characters in each row 
//                      sequentially from 'A' till the given number 
//                      of columns for all rows.
//  Author :            Pranita Purushottam Dumbre.
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
// Input 4  4   
/*
    A   B   C   D
    A   B   C   D
    A   B   C   D
    A   B   C   D
*/

#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       Displays pattern of alphabets starting from 'A' 
    //                    in every row up to given number of columns.
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

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
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