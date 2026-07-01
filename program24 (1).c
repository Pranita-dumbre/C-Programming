/////////////////////////////////////////////////////////////////////
//
//  File Name :         program24.c
//  Description :       Calculate sum of numbers from 1 to given number
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
///////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Summation
//  Description :       Calculate summation of numbers from 1 to given number
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
///////////////////////////////////////////////////////////////////////
int Summation(
                int iNo
            )
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d",iCnt);
    }
    return 0;
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Main
//  Description :       Accept number from user and display summation
//  Author :            Pranita Purushottam Dumbre
//  Date :              04/05/2026
//
///////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    
    printf("Summation is : %d\n",iRet);

    return 0;
}