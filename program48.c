////////////////////////////////////////////////////////////////////
//
//  File Name :         program48.c
//  Description :       Counts the number of digits in a given integer.
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026 
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     CountDigits
//  Description :       Returns the count of digits in the given integer.
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026 
//
/////////////////////////////////////////////////////////////////////
int CountDigits(
                    int iNo
                )
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     main
//  Description :       Reads an integer from the user and prints its digit count.
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026 
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}