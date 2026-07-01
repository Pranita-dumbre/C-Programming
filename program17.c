/////////////////////////////////////////////////////////////////////
//
//  File Name :         program17.c
//  Description :       It is used Display user input to 1 
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       It is used Print number iNo to 1 in reverse order
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
void Display(
                int iNo
            )
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\n",iCnt);
    }        
}
/////////////////////////////////////////////////////////////////////
//
//  Function Name :     Entry point function
//  Description :       It is used give input from user display the number in reverse order
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