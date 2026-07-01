/////////////////////////////////////////////////////////////////////
//
//  File Name :         program16.c
//  Description :       It is used Display 1 to that number 
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       It is used Print number 1 to iNo
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
void Display(
                int iNo
            )
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }        
}
/////////////////////////////////////////////////////////////////////
//
//  Function Name :     Main 
//  Description :       It is used give input from user display the number
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}