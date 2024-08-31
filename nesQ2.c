#include <stdio.h>

int main() {
    int a,b,c,d;
    
    printf("Enter a value of the first number: ");
    scanf("%d", &a);
    printf("Enter a value of the second number: ");
    scanf("%d", &b);
    printf("Enter a value of the third number: ");
    scanf("%d", &c);
    printf("Enter a value of the fourth number: ");
    scanf("%d", &d);

 if(a>=b)
 {
    if(a>=c)
    {
       if(a>=d)
       {
        printf("a is max");
       }
       else
       {
        printf("d is max");
       } 
    }
    else
    {
        if( c>=d)
        {
            printf("c is max");
        }
        else
        {
            printf("d is max");
        }
    }
    
 }
 else{
    if(b>=c)
    {
        if(b>=d)
        {
            printf("b is max");
        }
        else{
            printf("d is max");
        }
    }

}
    
  
}