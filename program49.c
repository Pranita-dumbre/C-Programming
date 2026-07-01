////////////////////////////////////////////////////////////////////
//
//  File Name :         program49.c
//  Description :       Counts even number of digits in a given integer.
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026 
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     CountEvenDigits
//  Description :       Returns the count of even digits in the given integer.
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026 
//
/////////////////////////////////////////////////////////////////////
int CountEvenDigits(
                        int iNo
                    )
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }        
        iNo = iNo / 10;
    }
    return iCnt;
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     main
//  Description :       Reads an integer from the user and prints its even count.
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026 
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Number of even digits are : %d\n",iRet);

    return 0;
}