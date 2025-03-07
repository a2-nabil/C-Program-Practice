#include <stdio.h>

int main()
{
    // Task 1: Check if a year is a leap year using nested if–else conditions.
    int nxtYear;
    printf("Enter a year: ");
    scanf("%d", &nxtYear);

    if (nxtYear % 4 == 0)
    {
        if (nxtYear % 100 == 0)
        {
            if (nxtYear % 400 == 0)
            {
                printf("%d is a leap year.\n", nxtYear);
            }
            else
            {
                printf("%d is not a leap year.\n", nxtYear);
            }
        }
        else
        {
            printf("%d is a leap year.\n", nxtYear);
        }
    }
    else
    {
        printf("%d is not a leap year.\n", nxtYear);
    }

    // Task 2: Check if a number is positive, negative or zero using nested if–else conditions.

    int nxtNum;
    printf("Enter a number: ");
    scanf("%d", &nxtNum);

    if (nxtNum > 0)
    {
        printf("%d is a positive number.\n", nxtNum);
    }
    else
    {
        if (nxtNum < 0)
        {
            printf("%d is a negative number.\n", nxtNum);
        }
        else
        {
            printf("%d is zero.\n", nxtNum);
        }
    }

    // Task 3: Create a grading program that assigns grades A, B, C, or D based marks using else-if ladder.

    int nxtMarks;
    printf("Enter marks: ");
    scanf("%d", &nxtMarks);

    if (nxtMarks >= 90)
    {
        printf("Grade: A\n");
    }
    else if (nxtMarks >= 80)
    {
        printf("Grade: B\n");
    }
    else if (nxtMarks >= 70)
    {
        printf("Grade: C\n");
    }
    else if (nxtMarks >= 60)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    // Task 4: Write a switch-case program that prints the name of the day given its number 1 to 7.

    int nxtDayNum;
    printf("Enter a number (1-7) for the day: ");
    scanf("%d", &nxtDayNum);

    switch (nxtDayNum)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    // Task 5: Given a month number 1 to 12, print the corresponding month using a switch statement.

    int nxtMonthNum;
    printf("Enter a month number (1-12): ");
    scanf("%d", &nxtMonthNum);

    switch (nxtMonthNum)
    {
    case 1:
        printf("January\n");
        break;
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("August\n");
        break;
    case 9:
        printf("September\n");
        break;
    case 10:
        printf("October\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("December\n");
        break;
    default:
        printf("Invalid input! Please enter a number between 1 and 12.\n");
    }

    // Task 6: Write a C program that uses switch statement to determine if a given character is a vowel or a consonant.

    char nxtChar;
    printf("Enter a character: ");
    scanf("%c", &nxtChar);
    if (nxtChar >= 'A' && nxtChar <= 'Z')
    {
        nxtChar = nxtChar + ('a' - 'A');
    }
    switch (nxtChar)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel.\n", nxtChar);
        break;
    default:
        if ((nxtChar >= 'a' && nxtChar <= 'z'))
        {
            printf("%c is a consonant.\n", nxtChar);
        }
        else
        {
            printf("Invalid input! Please enter an alphabet character.\n");
        }
    }

    // Task 7: Print 1 to 50 using FOR, WHILE and DO-WHILE loop.

    int nxtNum;
    // Using FOR loop
    printf("Using FOR loop:\n");
    for (nxtNum = 1; nxtNum <= 50; nxtNum++)
    {
        printf("%d ", nxtNum);
    }
    printf("\n\n");

    // Using WHILE loop
    printf("Using WHILE loop:\n");
    nxtNum = 1;
    while (nxtNum <= 50)
    {
        printf("%d ", nxtNum);
        nxtNum++;
    }
    printf("\n\n");

    // Using DO-WHILE loop
    printf("Using DO-WHILE loop:\n");
    nxtNum = 1;
    do
    {
        printf("%d ", nxtNum);
        nxtNum++;
    } while (nxtNum <= 50);
    printf("\n");

    // Task 8: Print all the even number from 1 to 100 using FOR loop.

    int nxtNum;
    printf("Even numbers from 1 to 100:\n");
    for (nxtNum = 2; nxtNum <= 100; nxtNum += 2)
    {
        printf("%d ", nxtNum);
    }

    printf("\n");

    // Task 9: Print all the odd number from 100 to 1 using WHILE loop.
    int nxtNum = 99;
    printf("Odd numbers from 100 to 1:\n");
    while (nxtNum >= 1)
    {
        printf("%d ", nxtNum);
        nxtNum -= 2;
    }
    printf("\n");

    // Task 10: Write a C program which takes a user input and check if that number is positive or negative.
    int nxtNum;

    printf("Enter a number: ");
    scanf("%d", &nxtNum);
    if (nxtNum > 0)
    {
        printf("%d is a positive number.\n", nxtNum);
    }
    else if (nxtNum < 0)
    {
        printf("%d is a negative number.\n", nxtNum);
    }
    else
    {
        printf("The number is zero.\n");
    }

    // Task 11: Write a C program to compute the sum of the first 10 natural numbers using FOR loop.
    int nxtSum = 0, nxtNum;
    for (nxtNum = 1; nxtNum <= 10; nxtNum++)
    {
        nxtSum += nxtNum;
    }

    printf("The sum of the first 10 natural numbers is: %d\n", nxtSum);

    // Task 12: Write a C program to display n terms of natural numbers and their sum using WHILE loop.

    // Task 13: Print the multiplication table of a number using a DO-WHILE loop.

    // Task 14: Write a C program to read 10 numbers from the user and find their sum and average.

    // Task 15: Write a C program which takes a user input and check if that number is prime or not.

    int nxtNum;
    int nxtIsPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &nxtNum);
    if (nxtNum <= 1)
    {
        printf("%d is not a prime number.\n", nxtNum);
    }
    else
    {
        for (int nxtI = 2; nxtI * nxtI <= nxtNum; nxtI++)
        {
            if (nxtNum % nxtI == 0)
            {
                nxtIsPrime = 0;
                break;
            }
        }

        if (nxtIsPrime)
            printf("%d is a prime number.\n", nxtNum);
        else
            printf("%d is not a prime number.\n", nxtNum);
    }

    return 0;
}