#include <stdio.h>

int main() {
    int season ; // Example: 1 for Spring, 2 for Summer, etc.
    int month ; // Example: 1 for January, 2 for February, etc.
    
printf("enter your season:");
scanf("%d",&season);
printf("enter your months:");
scanf("%d",&month);


    switch (season) {
        case 1:
            printf("Spring\n");
            switch (month) {
                case 3: printf("March: Mild and rainy\n"); break;
                case 4: printf("April: Blooming flowers\n"); break;
                case 5: printf("May: Warm and sunny\n"); break;
                default: printf("Not in Spring\n"); break;
            }
            break;
        case 2:
            printf("Summer\n");
            switch (month) {
                case 6: printf("June: Hot and sunny\n"); break;
                case 7: printf("July: Peak of summer\n"); break;
                case 8: printf("August: Warm and humid\n"); break;
                default: printf("Not in Summer\n"); break;
            }
            break;
        case 3:
            printf("rain\n");
            switch (month) {
                case 9: printf("September: Cool and breezy\n"); break;
                case 10: printf("October: Leaves falling\n"); break;
                case 11: printf("November: Preparing for winter\n"); break;
                default: printf("Not in Fall\n"); break;
            }
            break;
        case 4:
            printf("Winter\n");
            switch (month) {
                case 12: printf("December: Cold and snowy\n"); break;
                case 1: printf("January: Very cold\n"); break;
                case 2: printf("February: Still cold\n"); break;
                default: printf("Not in Winter\n"); break;
            }
            break;
        default:
            printf("Invalid season\n");
            break;
    }

    return 0;
}