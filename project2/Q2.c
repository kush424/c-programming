/*Q.2 Digit Counter
Develop a Program to count the total number of digits in a number.*/

#include<stdio.h>

int main()
{
    int n, count=0;

    printf("enter value:");
    scanf("%d", &n);

    for(int i=1 ; n!=0 ; i++ )
    {
        n/=10;
        count++;
    }
printf("Total number of digits:%d", count);

}