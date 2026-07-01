/////////////////////////////////////////////////////////////////////
//
//  File Name :         program21.c
//  Description :       Check even and odd number
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
///////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     CheckEven
//  Description :       the function used to return number is even or odd
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
///////////////////////////////////////////////////////////////////////
bool CheckEven(
                    int iNo
                )
{
    return ((iNo % 2) == 0);
}
///////////////////////////////////////////////////////////////////
//
//  Function Name :     Entry point function
//  Description :       give the number from user and display even or odd
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
///////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number to check whether it is even or odd : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if (bRet == true)
    {
        printf("%d is even number\n",iValue);
    }
    else 
    {
        printf("%d is odd number\n",iValue);
    }

    return 0;
}