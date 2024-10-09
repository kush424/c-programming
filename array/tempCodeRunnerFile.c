#include<stdio.h>


void main()
{
   
    int a[10],index,value,n;


    printf("Enetr Your Array Value:- ");
    scanf("%d",&n);




    for(int i=0 ; i<n ; i++)
    {
        printf("a[%d]:- ",i);
        scanf("%d",&a[i]);
    }


    printf("Enter Your Index Update:- ");
    scanf("%d",&index);
    printf("Enter Your Value Update:- ");
    scanf("%d",&value);


    a[index] = value;


    for(int i=0 ; i<n ; i++){
         printf("\n a[%d]=%d",i,a[i]);
    }
}

