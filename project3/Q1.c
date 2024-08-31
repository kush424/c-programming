
/*STEP 1 : Develop a program that takes a score out of 100 as input
from the user and calculates the corresponding grade using a ternary operator.
Allocate grades from A to F for various ranges.

 STEP 2: Extend the program to provide additional comments based on the grade using a switch-case
statement. For example, if the grade is ‘A’, then print ‘Excellent work!’. If the grade is ‘B’, then
print ‘Well done’. If the grade is ‘C’, then print ‘Good job’. If the grade is ‘D’, then print ‘You
passed, but you could do better’. And if the grade is ‘F’, then print ‘Sorry, you failed’.

STEP 3 :Further, extend the program to check eligibility for the next level based on the grade using an
if-else statement. Print ‘Congratulations! You are eligible for the next level’ if the grade is from
‘A’ to ‘D’. Print ‘Please try again next time’ if the grade is ‘F’. */

#include <stdio.h>gdrghf

int main()
{
    int score;
    char grade;

    printf("Enter a score out of 100: ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' : 
            (score >= 80) ? 'B':
            (score >= 70) ? 'C': 
            (score >= 60) ? 'D':
     'F';

    printf("Your grade is: %c\n", grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent work!\n");
        break;
    case 'B':
        printf("Well done\n");
        break;
    case 'C':
        printf("Good job\n");
        break;
    case 'D':
        printf("You passed, but you could do better\n");
        break;
    case 'F':
        printf("Sorry, you failed\n");
        break;
    default:
        printf("Invalid grade\n");
        break;
    }

    // Check eligibility for the next level
    if (grade >= 'A' && grade <= 'D')
    {
        printf("Congratulations! You are eligible for the next level\n");
    }
    else
    {
        printf("Please try again next time\n");

        return 0;
    }
}
