////////////////////////////////////////////////////////////////////
//
//  File Name :         program50.c
//  Description :       Sum of all digits in a given integer.
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026 
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     SumDigits
//  Description :       Returns the sum of all digits in the given integer.
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026 
//
/////////////////////////////////////////////////////////////////////
int SumDigits(
                int iNo
            )
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit; 
        iNo = iNo / 10;
    }
    return iSum;
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     main
//  Description :       Reads an integer from the user and prints its addition od all digits.
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026 
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summation of digits are : %d\n",iRet);

    return 0;
}