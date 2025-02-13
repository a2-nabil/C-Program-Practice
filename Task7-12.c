#include <stdio.h>

int main() {
    // Task 7: Quantity, price per item, and delivery method
    int quantity;
    float price;
    char delivery;
    
    printf("Enter quantity, price per item, and delivery method (S/E): ");
    scanf("%d %f %c", &quantity, &price, &delivery);
    printf("You entered: Quantity = %d, Price = %.2f, Delivery = ", quantity, price);

    if (delivery == 'S' || delivery == 's') {
        printf("Standard\n");
    } else if (delivery == 'E' || delivery == 'e') {
        printf("Express\n");
    } else {
        printf("Invalid delivery method\n");
    }
    
    // Task 8: Check even or odd
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is even.\n\n", number);
    } else {
        printf("%d is odd.\n\n", number);
    }
    
    // Task 9: Check if positive or not
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0) {
        printf("%d is positive.\n\n", num);
    } else {
        printf("%d is negative.\n\n", num);
    }
    
    // Task 10: Check voting eligibility
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You are eligible to vote.\n\n");
    } else {
        printf("You are not eligible to vote.\n\n");
    }
    
    // Task 11: Find the larger number
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf("The larger number is %d.\n\n", num1);
    } else if (num2 > num1) {
        printf("The larger number is %d.\n\n", num2);
    } else {
        printf("Both numbers are equal.\n\n");
    }
    
    // Task 12: Check leap year
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}