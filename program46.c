////////////////////////////////////////////////////////////////////
//
//  File Name :         program46.c
//  Description :       Accept number from user and display all digits
//                       from right to left using modulus (%) and division (/).
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayDigits
//  Description :       Accepts a number and prints each digit.Extracts digits using % 10 
//                      and reduces number using / 10.
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026
//
/////////////////////////////////////////////////////////////////////
void DisplayDigits(
                        int iNo
                    )
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     main
//  Description :       Accepts number from user and calls DisplayDigits function.
//  Author :            Pranita Purushottam Dumbre
//  Date :              20/05/2026
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}