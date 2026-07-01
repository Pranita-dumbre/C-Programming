////////////////////////////////////////////////////////////////////
//
//  File Name :         program37.c
//  Description :       Accept number from user and display its even factors
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayEvenFactors
//  Description :       Display all even factors of given number
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
void DisplayEvenFactors(
                            int iNo
                        )
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {   iNo = -iNo; }

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\n",iCnt);
        }
    }
}
///////////////////////////////////////////////////////////////////
//
//  Function Name :     Main
//  Description :       Entry point function. Accept number from user 
//                      and call DisplayEvenFactors function.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}