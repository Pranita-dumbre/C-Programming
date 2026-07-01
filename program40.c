////////////////////////////////////////////////////////////////////
//
//  File Name :         program40.c
//  Description :       Accept number from user and check whether it is prime
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     CheckPerfect
//  Description :       Check if the given number is a prime number
//                       (number greater than 1 having no other factors)
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
bool CheckPrime(
                    int iNo
                )
{
    int iCnt = 0;
    bool bFlag = true;
    
    if(iNo < 0)     // Updator
    {   iNo = -iNo; }

    for(iCnt = 2; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt == 0))
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     main
//  Description :       Entry point function. Accept number from user,
//                      call CheckPrime function and display result. 
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
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