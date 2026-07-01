////////////////////////////////////////////////////////////////////
//
//  File Name :         program39.c
//  Description :       Accept number from user and check whether it is perfect or not
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name :     CheckPerfect
//  Description :       Check if the given number is a perfect number
//                       (sum of all proper factors equals the number)
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
bool CheckPerfect(
                    int iNo
                )
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)     // Updator
    {   iNo = -iNo; }

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt == 0))
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
////////////////////////////////////////////////////////////////////
//
//  Function Name :     main
//  Description :       Entry point function. Accept number from user,
//                      call CheckPerfect function and display result.
//  Author :            Pranita Purushottam Dumbre
//  Date :              11/05/2026
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }

    return 0;
}