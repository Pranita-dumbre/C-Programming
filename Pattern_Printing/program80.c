// Input : 4
// Output : 
/*
4
3
2
1
0
*/
////////////////////////////////////////////////////////////////////
//
//  File Name :         program80.c
//  Description :       Program to accept a number from user (frequency) 
//                      and print numbers from that number down to 0.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       Accepts an integer and prints numbers from 
//                      that integer down to 0 in reverse order in separate lines.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////

void Display(
                int iNo
            )
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    } 
    
    for(iCnt = iNo; iCnt >= 0; iCnt--)
    {
        printf("%d\n",iCnt);
    }
    printf("\n");
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     main
//  Description :       Entry point function. Accepts frequency 
//                      from user and calls Display function 
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

// Time Complexity O(N)
// N is a natural number
// Where N >= 0 and N <= Inifinity