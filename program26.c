////////////////////////////////////////////////////////////////////
//
//  File Name :         program26.c
//  Description :       Accept number from user and calculate its factorial
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Factorial
//  Description :       Calculate factorial of given number
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
/////////////////////////////////////////////////////////////////////
int Factorial(
                int iNo
            )
{
    int iCnt = 0;
    int iFact = 1;

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
//  Date :              04/05/2026
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    
    printf("Factorial is : %d\n",iRet);

    return 0;
}