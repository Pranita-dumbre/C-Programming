//////////////////////////////////////////////////////////////////
//
//  File Name :         program101.java
//  Description :       Program to display pattern of alphabets where 
//                      odd rows contain lowercase letters and even rows 
//                      contain uppercase letters.
//  Author :            Pranita Purushottam Dumbre.
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
// Input 4  4   
/*
    a   a   a   a
    B   B   B   B
    c   c   c   c
    D   D   D   D
*/

//////////////////////////////////////////////////////////////////////
//
//  Method Name :     Display
//  Description :     Displays pattern with lowercase alphabets in 
//                    odd rows and uppercase alphabets in even rows.
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
    char ch1 = '\0', ch2 = '\0';

        for(i = 1, ch1 = 'a', ch2 = 'A'; i <= iRow; i++, ch1++, ch2++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i % 2 == 0)
                {
                    printf("%c\t",ch2);
                }
                else
                {
                    printf("%c\t",ch1);
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