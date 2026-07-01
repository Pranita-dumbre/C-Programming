// Input : 4
// Output : -4  -3  -2  -1  0

////////////////////////////////////////////////////////////////////
//
//  File Name :         program82.c
//  Description :       Accepts a number from the user and displays
//                      numbers from the negative of the entered number
//                      up to 0 in increasing order.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/06/2026 
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       Prints numbers from the negative of the given
//                      input up to 0 in increasing order.
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
    
    for(iCnt = -iNo; iCnt <= 0; iCnt++)
    {
        printf("%d\t",iCnt);
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