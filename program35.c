////////////////////////////////////////////////////////////////////
//
//  File Name :         program35.c
//  Description :       Accept number from user and display its factors
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayFactors
//  Description :       Display all positive factors of given number 
//                      except the number itself
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
void DisplayFactors(
                        int iNo
                    )
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {   iNo = -iNo; }

    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
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