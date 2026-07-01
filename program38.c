////////////////////////////////////////////////////////////////////
//
//  File Name :         program38.c
//  Description :       Accept number from user and return addition of its factors
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     SumFactors
//  Description :       Calculate addition of all proper factors of given number
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
int SumFactors(
                    int iNo
                )
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)     // Updator
    {   iNo = -iNo; }

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt == 0))
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
///////////////////////////////////////////////////////////////////
//
//  Function Name :     Main
//  Description :       Entry point function. Accept number from user,
//                      call SumFactors function and display addition.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Addition of factors : %d\n",iRet);

    return 0;
}