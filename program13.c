/////////////////////////////////////////////////////////////////////
//
//  File Name :         program13.c
//  Description :       It is used Display user defined value 5 times  
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       It is used Display user value 5 times
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
void Display(
                int iNo
            )
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n",iNo);
    }        
}
/////////////////////////////////////////////////////////////////////
//
//  Function Name :     Entry point function
//  Description :       It is used Display user defined value 5 times  
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter the value : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}