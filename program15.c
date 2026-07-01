/////////////////////////////////////////////////////////////////////
//
//  File Name :         program15.c
//  Description :       It is used Display Hello 
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       It is used Display Hello iNo times with numbering
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
        printf("%d : Hello\n",iCnt);
    }        
}
/////////////////////////////////////////////////////////////////////
//
//  Function Name :     Entry point Function
//  Description :       It is used Display Hello iValue times  
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