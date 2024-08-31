#include<stdio.h>
#define A 0.5

int main()
{
    int base,hight,area;
   
    
    printf("enter base:-");
    scanf("%d",&base);

    printf("enter hight:-");
    scanf("%d",&hight);

  area = A*base*hight;
    printf("%d",area);
    return 0;
}