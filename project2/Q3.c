// Q.3 Digit Addition
// Develop a Program to find the sum of a number's first and last digits.

#include<stdio.h>

int main ()
{
    int num, count=0 , first , last;

    printf("enter your value:");
    scanf("%d",&num);

    last = num%10;

    for (int i=1 ; num!=0 ; i++)
     {
        // printf("\n num %d",num);
        first = num ;
        num = num/10;
        count++;
     }

     printf("\n First=%d,  last=%d",first, last);
     printf("\n sum of total:%d",first+last);

}