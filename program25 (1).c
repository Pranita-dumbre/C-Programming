////////////////////////////////////////////////////////////////////
//
//  File Name :         program25.c
//  Description :       Accept number from user and calculate summation of numbers from 1 to that number
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
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Main
//  Description :       Entry point function, accepts number from user and displays summation
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