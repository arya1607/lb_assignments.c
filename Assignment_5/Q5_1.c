/*
Problem Statement: Accept three integers and determine the greatest number among them. 
The program must also work correctly when two or all three numbers are equal.
*/

#include <stdio.h>
#include <stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if (iFirst >= iSecond && iFirst >= iThird) {
        printf("%d is Greatest\n", iFirst);
    } else if (iSecond >= iFirst && iSecond >= iThird) {
        printf("%d is Greatest\n", iSecond);
    } else {
        printf("%d is Greatest\n", iThird);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}