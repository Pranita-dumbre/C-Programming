/////////////////////////////////////////////////////////////////////
//
//  File Name :         program18.c
//  Description :       It is performed the addition
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Calculate
//  Description :       It is used addition of number 1 to iNo
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
int Calculate(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }        
    return iSum;
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     Main
//  Description :       It is gives the frequency from user and display 
//                      addtion of all numbers
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    iRet = Calculate(iValue);
    printf("Sumation is %d\n",iRet);
    
    return 0;
}