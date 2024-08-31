#include <stdio.h>

int main()
{
    int rollNo, sub1, sub2, sub3, total;
    char name[20];
    float avg;

    printf("enter your roll no:");
    scanf("%d", &rollNo);

    printf("enter your name:");
    scanf("%s", &name);

    printf("enter your sub1 marks:");
    scanf("%d", &sub1);

    printf("enter your sub2 marks:");
    scanf("%d", &sub2);

    printf("enter your sub3 marks:");
    scanf("%d", &sub3);

    if (sub1 > 100 || sub2 > 100 || sub3 > 100)
    {
        printf("invalid marks");
    }
    else
    {
        total = sub1 + sub2 + sub3;
        avg = total / 3;

        printf("\n total is = %d", total);
        printf("\n ave = %f", avg);

        if (sub1 >= 35, sub2 >= 35, sub3 >= 35)
            ;
        {
            printf("\n you are pass");

            if (avg >= 80)
            {
                printf("\n grade is a");
            }
            else if (avg >= 60)
            {
                printf("\n grade is b");
            }
            else if (avg >= 40)
            {
                printf("\n grade is c");
            }
            else
            {
                printf("\n grade is d");
            }
        }

        else
        {
            printf("\n your are a fail");
        }
    }
}