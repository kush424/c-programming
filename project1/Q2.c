#include <stdio.h>

int main()
{
    int BaseSalary, HRA, DA, TA, fs;

    printf("enter your salary:");
    scanf("%d", &BaseSalary);

    HRA = BaseSalary * 10 / 100;
    DA = BaseSalary * 5 / 100;
    TA = BaseSalary * 8 / 100;

    fs = BaseSalary + HRA + DA + TA;

    printf("Gross Salary:%d", fs);
}