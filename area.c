#include <stdio.h>
#define PI 3.14

int main()
{
    float radius, area;

    printf("Enter your radius:- ");
    scanf("\n %f", &radius );

  

area = PI *radius * radius;
printf("\n the area of the circle:- %.2f", area);
}