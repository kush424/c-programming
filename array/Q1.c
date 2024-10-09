#include <stdio.h>

int main()
{
    int n;


    printf("Enter your Array size:-");
    scanf("%d",&n);

    int arr[n];

    for (int i=0 ; i<n ; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n Length of array :%d",n); 

}