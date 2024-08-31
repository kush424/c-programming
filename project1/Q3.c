#include<stdio.h>

int main()
{
    int Firstangle , Secondangle ,Thirdangle ;

  printf("Firstangle:");
  scanf("%d",&Firstangle);
  printf("Secondangle:");
  scanf("%d",&Secondangle);

  Thirdangle= 180 - Firstangle-Secondangle;

  printf("Thirdangle :%d",Thirdangle);
}