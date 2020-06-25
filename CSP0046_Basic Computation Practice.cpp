#include <stdio.h>
#include <math.h>
#include<stdlib.h>

void menu() {
    printf("	1 – output first primes of the inputted number\n");
    printf("	2 – check a Fibonacci number\n");
    printf("	3 – sum of digits in a positive natural number\n");
    printf("	4 – Exit\n");
    printf(" Choose an option: ");
}

void output_first_primes() {
    int n, check = 0;
    do {
        if (n > 50) {
            printf("Please enter (number <= 50)!\n");
        }
        printf("Number of primes: ");
        scanf("%d", &n);
    } while (n > 50);

    for (int num = 1; num < 1000; num++) {
        int count = 0; // dem so uoc cua a
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                count++;
            }
        }
        if (count == 0 && num > 1) {
            printf("%5d", num);
            check++;
            if (check == n) {
                break;
            }
        }

    }
}

void check_a_fibonacci_number() {
    int n, fib1 = 1, fib2 = 1, fib = 2;
    do {
        if (n < 0 || n > 1000) {
            printf("Please enter (0 < number <= 1000)!\n");
        }
        printf("Number tested: ");
        scanf("%d", &n);
    } while (n < 0 || n > 1000);

    while (fib1 + fib2 <= n) {
        fib = fib1 + fib2;
        fib2 = fib1;
        fib1 = fib;
    }
    if (fib == n) {
        printf("It's a Fibonacci term.");
    } else {
        printf("It's not a Fibonacci term.");
    }
}

void sum_of_digits_number() {
    int n;
    int last, sum = 0;
    do {
        if (n < 0) {
            printf("Please enter a positive natural number: \n");
        }
        printf("Enter an integer: ");
        scanf("%d", &n);
    } while (n < 0);
    while (n != 0) {
        last = n % 10;
        n = n / 10;
        sum = sum + last;
    }
    printf("Sum of digits number : %d", sum);
}

int main() {

    while (1) {
        int key,check =0;
        char character,c;
        menu();
        fflush(stdin);
        //fpurge(stdin);
        check = scanf("%d%c", &key, &character);
        if (check == 2 && character == '\n') {
            switch (key) {
                case 1:
                    output_first_primes();
                    break;
                case 2:
                    check_a_fibonacci_number();
                    break;
                case 3:
                    sum_of_digits_number();
                    break;
                default:
                    exit(0);
            }
        } else {
            printf("Please choose number of menu!\n");
        }
        printf("\nDo you want to return the main menu (Y/N): ");
        //fpurge(stdin);
        fflush(stdin);
        c = getchar();
        if (c == 'N' || c == 'n') {
            break;
        }
    }
}


