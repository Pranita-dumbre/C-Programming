///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Used to calculate percentage
//  Author :        Pranita Purushottam Dumbre
//  Date :          03/05/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Total = 0;
    int Obtained = 0;
    float Percentage = 0.0f;

    printf("Enter your total marks : \n");
    scanf("%d",&Total);

    printf("Enter your obtained marks : \n");
    scanf("%d",&Obtained);

    Percentage = ((float)Obtained / (float)Total) * 100;

    printf("Percentage is : %.2f%%\n",Percentage);
    
    return 0;
}