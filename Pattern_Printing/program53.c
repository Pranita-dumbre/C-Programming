//////////////////////////////////////////////////////////////////
//
//  File Name :         program53.c
//  Description :       Program to display characters in matrix pattern 
//                      sequentially from 'A' till the rows and columns 
//                      entered by the user.
//  Author :            Pranita Purushottam Dumbre.
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
// Input 4  4   
/*
    A   B   C   D
    E   F   G   H
    I   J   K   L
    M   N   O   P
*/

#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       Displays alphabets in matrix pattern from 'A'
//                      according to given rows and columns.
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
            for(j = 1; j <= iCol; j++,ch++)
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