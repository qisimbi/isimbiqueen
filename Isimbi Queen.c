
#include <stdio.h>

// 1. Declare and Input Variables (String input)
void inputString() {
    char name[50];
    printf("\nEnter your name: ");
    scanf("%s", name);
}

// 2. Sum of Two Integers
void sumTwoIntegers() {
    int a, b, sum;
    printf("\nEnter two integers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
}

// 3. Multiplication Table
void multiplicationTable() {
    int num, i;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}

// 4. Even or Odd
void evenOrOdd() {
    int num;
    printf("\nEnter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}

// 5. Maximum of Three Numbers
void maximumOfThree() {
    int a, b, c;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
        printf("Maximum is %d\n", a);
    else if(b >= a && b >= c)
        printf("Maximum is %d\n", b);
    else
        printf("Maximum is %d\n", c);
}

// 6. Swap Variables
void swapVariables() {
    int a, b, temp;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
}

// 7. Print 1 to 10
void printOneToTen() {
    int i;
    printf("\nNumbers from 1 to 10:\n");
    for(i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// 8. Factorial
void factorial() {
    int n, i;
    unsigned long long fact = 1;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial of %d = %llu\n", n, fact);
}

int main() {
    int choice;
    do {
        printf("\n--- Basic C Exercises Menu ---\n");
        printf("1. Input String\n");
        printf("2. Sum of Two Integers\n");
        printf("3. Multiplication Table\n");
        printf("4. Even or Odd\n");
        printf("5. Maximum of Three Numbers\n");
        printf("6. Swap Variables\n");
        printf("7. Print 1 to 10\n");
        printf("8. Factorial\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: inputString(); break;
            case 2: sumTwoIntegers(); break;
            case 3: multiplicationTable(); break;
            case 4: evenOrOdd(); break;
            case 5: maximumOfThree(); break;
            case 6: swapVariables(); break;
            case 7: printOneToTen(); break;
            case 8: factorial(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while(choice != 0);

    return 0;
}
