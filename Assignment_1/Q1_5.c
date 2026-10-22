#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5; // Simulating accepted value as per the snippet

    Accept(iValue);
    
    return 0;
}