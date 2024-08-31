#include<stdio.h>

int main()
{
    float c;
    float f;
    printf("The temperature in Celsius:");
    scanf("%f",&c);

   f = c*9/5 + 32;
    printf("The temperature in Fahrenheit:%.1f",f);
}