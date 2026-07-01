////////////////////////////////////////////////////////////////////
//
//  File Name :         program28.c
//  Description :       Accept number from user and calculate factorial (with error handling)
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
int Factorial(
                unsigned int iNo
            )
{
    int iCnt = 0, iFact = 1;

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
//  Function Name :     main
//  Description :       Entry point function, accepts number from user and displays factorial
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
int main()
{
    unsigned int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);
    if(iRet == ERR_INVALID)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Factorial is : %d\n",iRet);
    }
    
    return 0;
}