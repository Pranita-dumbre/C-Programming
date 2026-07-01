// Input : 4    #
// Output : #   #   #   #

// Input : 5    &
// Output : &   &   &   &   &

// Input : 3    z
// Output : z   z   z

////////////////////////////////////////////////////////////////////
//
//  File Name :         program85.c
//  Description :       Accepts a number and a character from the user
//                      and prints the character the specified number
//                      of times in a single line, separated by tabs.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       Prints the given character 'ch' exactly 'iNo' times
//                      in a single line, separated by tabs.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////

void Display(
                int iNo, 
                char ch
            )
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    } 
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)     // N
    {
        printf("%c\t",ch);
    }
    printf("\n");
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     main
//  Description :       Entry point of the program. Accepts an integer
//                      and a character from the user, then calls
//                      Display function to print the character multiple times.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    char cValue = '\0';

    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    printf("Enter character : \n");
    scanf("%c",&cValue);

    printf("Accepted character is : %c\n",cValue);

    Display(iValue,cValue);

    return 0;
}

// Time Complexity O(N)
// N is a natural number
// Where N >= 0 and N <= Inifinity