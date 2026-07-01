######################################################################
#
#  File Name :         program30.py
#  Description :       Accept number from user and display factorial
#  Author :            Pranita Purushottam Dumbre
#  Date :              11/05/2026
#
######################################################################

######################################################################
#
#  Function Name :      Factorial
#  Description :        Calculate factorial of given number
#  Author :             Pranita Purushottam Dumbre
#  Date :               11/05/2026
#
######################################################################
def Factorial(iNo):
    iFact = 1

    for i in range(1,iNo+1):
        iFact = iFact * i

    return iFact
######################################################################
#
#  Function Name :     Main
#  Description :       Accept input from user and display factorial
#  Author :            Pranita Purushottam Dumbre
#  Date :              11/05/2026
#
######################################################################
def main():
    print("Enter number : ")
    iValue = int(input())

    iRet = Factorial(iValue)

    print("Factorial is : ",iRet)

if __name__ == "__main__":
    main()