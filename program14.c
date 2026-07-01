/////////////////////////////////////////////////////////////////////
//
//  File Name :         program14.c
//  Description :       It is used Display Hello 
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       It is used Display Hello iNo times  
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
        printf("Hello\n");
    }        
}
/////////////////////////////////////////////////////////////////////
//
//  Function Name :     Entry Point function
//  Description :       input from user and display hello that times
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