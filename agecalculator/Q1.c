#include <stdio.h>

int main()
{
    int cy, by, cm, bm, cd, bd, age, months, days;

    printf("Enter the current year: ");
    scanf("%d", &cy);

    printf("Enter the current month (1-12): ");
    scanf("%d", &cm);

    printf("Enter the current day (1-31): ");
    scanf("%d", &cd);

    printf("Enter the birth year: ");
    scanf("%d", &by);

    printf("Enter the birth month (1-12): ");
    scanf("%d", &bm);

    printf("Enter the birth date (1-31): ");
    scanf("%d", &bd);

    age = cy - by;
    // Calculate months completed
    if (cm < bm)
    {
        months = 12 - bm + cm;
        age--;
    }
    else
    {
        months = cm - bm;
    }

    // Calculate days completed
    if (cd < bd)
    {
        days = 30 - bd + cd; // Assuming 30 days in a month
        months--;
    }
    else
    {
        days = cd - bd;
    }

    printf("You have completed %d years, %d months, and %d days from your birth date.\n", age, months, days);

    return 0;
}