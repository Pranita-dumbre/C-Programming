/////////////////////////////////////////////////////////////////////
//
//  File Name :         program23.c
//  Description :       Check given number is divisible by 3 & 5 both
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
///////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     CheckDivisible
//  Description :       used to check given number is divisible by 5 & 3 both
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
///////////////////////////////////////////////////////////////////////
bool CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Main
//  Description :       used to check given number is divisible by 5 & 3
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
///////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number to check whether it is divisible by 3 & 5 : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);
    if (bRet == true)
    {
        printf("%d is divisible by 3 & 5\n",iValue);
    }
    else 
    {
        printf("%d is not divisible 3 or 5\n",iValue);
    }

    return 0;
}