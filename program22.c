/////////////////////////////////////////////////////////////////////
//
//  File Name :         program22.c
//  Description :       Check given number is divisible by 5 or not
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
///////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     CheckDivisible
//  Description :       used to check given number is divisible by 5 or not
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
///////////////////////////////////////////////////////////////////////
bool CheckDivisible(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
///////////////////////////////////////////////////////////////////
//
//  Function Name :     Entry point function
//  Description :       give the number from user and display 
//                      divisible by 5 or not
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
///////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number to check whether it is divisible by 5 or not : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);
    if (bRet == true)
    {
        printf("%d is divisible by 5\n",iValue);
    }
    else 
    {
        printf("%d is not divisible by 5\n",iValue);
    }

    return 0;
}