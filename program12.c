/////////////////////////////////////////////////////////////////////
//
//  File Name :         program12.c
//  Description :       It is used Display Hello  
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       It is used Display hello using looping  
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
void Display(
     
            )
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("%d\n",iCnt);
    }        
}
/////////////////////////////////////////////////////////////////////
//
//  Function Name :     Entry point function
//  Description :       It is used Display hello   
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
int main()
{
    Display();

    return 0;
}