////////////////////////////////////////////////////////////////////
//
//  File Name :         program33.c
//  Description :       Accept number from user and display its factors
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayFactors
//  Description :       Display all factors of given number except itself
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
void DisplayFactors(
                        int iNo
                    )
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
///////////////////////////////////////////////////////////////////
//
//  Function Name :     Main
//  Description :       Accept number from user and display its factors
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}