/*Simple Calculator is a C language-based application used for
performing all the simple arithmetic operations like addition,
multiplication, division, and subtraction. The application can be
made using basic knowledge of C like if-else statements, loops,
etc.
The functionalities of the application are mentioned below:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Logarithmic values
6. Square roots
*/

#include <stdio.h>
#include <math.h> 
void addition();
void subtraction();
void multiplication();
void division();
void logarithm();
void squareRoot();
int main() {
    int choice;

    do {
        printf("\nSelect an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Logarithmic values\n");
        printf("6. Square roots\n");
        printf("7. Exit\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                logarithm();
                break;
            case 6:
                squareRoot();
                break;
            case 7:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice!Please enter number between 1-7.\n");
        }
    } 
    while (choice != 7);
    
    return 0;
}
void addition() {
    double a, b;
    printf("Enter first number:\n",a);
    printf("Enter second number:\n",b);
    scanf("%lf %lf", &a, &b);
    printf("Result of addition is : %.2lf\n", a + b);
}

void subtraction() {
    double a, b;
    printf("Enter first number:\n",a);
    printf("Enter second number:\n",b);
    scanf("%lf %lf", &a, &b);
    printf("Result of subtraction is : %.2lf\n", a - b);
}

void multiplication() {
    double a, b;
    printf("Enter first number:\n",a);
    printf("Enter second number:\n",b);
    scanf("%lf %lf", &a, &b);
    printf("Result of multiplication is : %.2lf\n", a * b);
}

void division() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    if (b != 0) {
        printf("Result of division is : %.2lf\n", a / b);
    }
    else {
        printf("Error: Division by zero is not possible.\n");
    }
}

void logarithm() {
    double a;
    printf("Enter a positive number: ");
    scanf("%lf", &a);
    if (a > 0) {
        printf("Logarithm (base e): %lf\n", log(a));              // Natural logarithm
        printf("Logarithm (base 10): %lf\n", log10(a));
    }
    else {
        printf("Error: Logarithm is only defined for positive numbers.\n");
    }
}

void squareRoot() {
    double a;
    printf("Enter a non-negative number: ");
    scanf("%lf", &a);
    if (a >= 0) {
        printf("Square root of the number is : %lf\n", sqrt(a));
    }
    else {
        printf("Error: Square root is not defined for negative numbers.\n");
    }
}



