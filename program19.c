/////////////////////////////////////////////////////////////////////
//
//  File Name :         program19.c
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
//  Description :       the function used to check even or odd
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
///////////////////////////////////////////////////////////////////////
bool CheckEven(
                    int iNo
                )
{
    if((iNo % 2) == 0)
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
//  Function Name :     main
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