#include<stdio.h>
#define PI 3.14 

int main()
{
    float radius,area;

    printf("enter your no:-");
    scanf("%f",&radius);

area=PI*2*radius;
    printf("The perimeter of the circle:-%f",area);
}