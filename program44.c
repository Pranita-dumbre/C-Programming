////////////////////////////////////////////////////////////////////
//
//  File Name :         program44.c
//  Description :       Accept number from user and check whether it is a prime number
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     CheckPrime
//  Description :       Check if the given number is a prime number
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026
//
/////////////////////////////////////////////////////////////////////
bool CheckPrime(
                    int iNo
                )
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }
    
    return (iCnt > (iNo/2));
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     main
//  Description :       Accept number from user,call CheckPrime function and display result.
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }
    return 0;
}