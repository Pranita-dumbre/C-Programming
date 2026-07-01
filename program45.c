////////////////////////////////////////////////////////////////////
//
//  File Name :         program45.c
//  Description :       Extract and display each digit of a given number
//                       using modulus (%) and division (/) operations.
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     main
//  Description :       Extracts each digit of a number from right to left
//                      and prints it step-by-step along with updated number.
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iNo = 751;
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);      // 1
    iNo = iNo / 10;
    printf("Updated iNo : %d\n",iNo);       // 75

    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);      // 5
    iNo = iNo / 10;
    printf("Updated iNo : %d\n",iNo);       // 7

    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);      // 7
    iNo = iNo / 10;
    printf("Updated iNo : %d\n",iNo);       // 0

    return 0;
}