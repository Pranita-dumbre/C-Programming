////////////////////////////////////////////////////////////////////
//
//  File Name :         program36.c
//  Description :       Accept number from user and display its factors
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayFactorsNonFactors
//  Description :       Display all factors and non-factors of number
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
void DisplayFactorsNonFactors(
                                int iNo
                            )
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {   iNo = -iNo; }

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("Factor is %d\n",iCnt);
        }
        else
        {
            printf("Non Factor is %d\n",iCnt);
        }
    }
}
///////////////////////////////////////////////////////////////////
//
//  Function Name :     Main
//  Description :       Accept number from user and display its 
//                      factors and non-factors
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactorsNonFactors(iValue);

    return 0;
}