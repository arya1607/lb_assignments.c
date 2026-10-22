/*
Problem Statement: Accept the total purchase amount and calculate the final payable amount after applying the following discount. Negative purchase amounts are invalid.
Below ₹1000: 0%
₹1000 to below ₹5000: 10%
₹5000 and above: 20%
*/

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0.0f) {
        printf("Invalid input\n");
        return;
    }

    if (fAmount < 1000.0f) {
        fDiscount = 0.0f;
    } else if (fAmount < 5000.0f) {
        fDiscount = fAmount * 0.10f;
    } else {
        fDiscount = fAmount * 0.20f;
    }

    fFinalAmount = fAmount - fDiscount;
    printf("Payable Amount = %.2f\n", fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}