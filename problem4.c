#include<stdio.h>

int main()
{
    int p,r,n;

    printf("enter your number:-");
    scanf("%d",&p);
    printf("enter your rate:-");
    scanf("%d",&r);
    printf("enter your time:-");
    scanf("%d",&n);


    printf("simpal interest:- %d",(p*r*n/100));
}