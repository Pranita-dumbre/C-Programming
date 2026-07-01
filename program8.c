/*
    Start
        Accept age from user
            If age is less than 5 then there will no ticket
            If it is in between 5 to 18 then it will be 700
            It it is in betwween 18 to 50 it will be 999
            And if it is greater than 50 then it will be 500
    Stop
*/
/////////////////////////////////////////////////////////////////////
//
//  File Name :         program8.c
//  Description :       It is used Display price of Ticket according your age 
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
#include<stdio.h>

# define ERR_INVALID_AGE -1
/////////////////////////////////////////////////////////////////////
//
//  Function Name :     CalculateTicket
//  Description :       It is used Calculate Ticket according to age
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
int CalculateTicket(
                        int iAge
                    )
{
    if(iAge < 0)
    {
        return ERR_INVALID_AGE;
    }

    if((iAge >= 0) && (iAge <= 5))
    {
        return 0;
    }
    else if((iAge > 5) && (iAge <= 18))
    {
        return 700;
    }
    else if((iAge > 18) && (iAge <= 50))
    {
        return 999;
    }
    else if(iAge > 50)
    {
        return 500;
    }
}
/////////////////////////////////////////////////////////////////////
//
//  Function Name :     Entry point function
//  Description :       It is used Calculate Ticket
//  Author :            Pranita Purushottam Dumbre
//  Date :              03/05/2026
//
///////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Please enter your age : \n");
    scanf("%d",&iValue);

    iRet = CalculateTicket(iValue);

    if(iRet == ERR_INVALID_AGE)
    {
        printf("Unable to calculate the ticket price as age is invalid\n");
    }
    else
    {
        printf("Your ticket price is : %d\n",iRet);
    }

    return 0;
}

