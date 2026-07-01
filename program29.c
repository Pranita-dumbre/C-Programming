////////////////////////////////////////////////////////////////////
//
//  File Name :         program29.c
//  Description :       Accept number from user and calculate its factorial
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>

#define ERR_INVALID -1
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Factorial
//  Description :       Calculate factorial of given number, return error if input is negative
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
unsigned long Factorial(
                            unsigned int iNo
                        )
{
    int iCnt = 0;
    unsigned long iFact = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Main
//  Description :       Entry point function, accepts number from user and displays factorial
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
int main()
{
    unsigned int iValue = 0;
    unsigned long iRet = 0;
    
    printf("Enter number : \n");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);
    if(iRet == ERR_INVALID)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Factorial is : %lu\n",iRet);
    }
    
    return 0;
}