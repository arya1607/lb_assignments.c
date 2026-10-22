/*
Problem Statement: Accept the marks of a student out of 100 and display the grade 
according to the following criteria. Marks outside 0–100 are invalid.
90–100: A, 75–89: B, 60–74: C, 40–59: D, Below 40: Fail
*/

#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fMarks)
{
    if (fMarks < 0.0f || fMarks > 100.0f) {
        printf("Invalid Marks\n");
    } else if (fMarks >= 90.0f) {
        printf("Grade A\n");
    } else if (fMarks >= 75.0f) {
        printf("Grade B\n");
    } else if (fMarks >= 60.0f) {
        printf("Grade C\n");
    } else if (fMarks >= 40.0f) {
        printf("Grade D\n");
    } else {
        printf("Fail\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}