#include <stdio.h>

int fact(int num)
{
    if(num<=1)
    {
        return 1;
    }
    else
    {
    return num*fact(num-1);
    }
}

void main()
{
    int ans , n;

    printf("Enetr Your Number:- ");
    scanf("%d",&n);

    ans=fact(n);
    printf("fact of %d",ans);
}
