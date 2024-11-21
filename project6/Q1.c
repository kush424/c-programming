#include <stdio.h>

void add();
void subtract();
void multiply();
void divide();
void modulus();

void main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("Press 1 for Addition (+)\n");
        printf("Press 2 for Subtraction (-)\n");
        printf("Press 3 for Multiplication (*)\n");
        printf("Press 4 for Division (/)\n");
        printf("Press 5 for Modulus (%%)\n");
        printf("Press 0 for Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                modulus();
                break;
            case 0:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 0);
}

void add() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a + b);
}

void subtract() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a - b);
}

void multiply() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a * b);
}

void divide() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(b != 0) {
        printf("Result: %.2f\n", (float)a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

void modulus() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(b != 0) {
        printf("Result: %d\n", a % b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
