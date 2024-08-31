// Develop a program that takes a score out of 100 as input from the user and calculates the
// corresponding grade using a ternary operator. Allocate grades from A to F for various ranges.

#include<stdio.h>

int main()
{
    int score;
    char ch;

    printf("enter your value:");
    scanf("%d",&score);

    ch=score>90? 'A':
    score>80?'B':
    score>70?'C':
    score>60?'D':
    'f';
    printf("%c",ch);
}