#include<stdio.h>

int main()
{
    int length, breadth;
    printf("Enter your length\n");
    scanf("\n%d",&length);

    printf("Enter your breadth\n");
    scanf("\n%d",&breadth);

    printf("the area of this rectangle is %d", length*breadth);
    
    return 0;
}