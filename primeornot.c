/*Write a C program to check whether a given integer is prime. If it is not a prime number, display 
all its factors excluding 1 and that number.*/
#include <stdio.h>

int main()
{
    int num, i, prime = 1,j;

    printf("Enter an integer: ");
    scanf("%d", &num);


    if (num < 2) {
        printf("%d is not a prime number.\n", num);
    }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            prime = 0;
            printf("%d is not a prime number.\n", num);
            printf("Its factors excluding 1 and %d are: ", num);
            for (j = 2; j <= num/2; j++) {
                if (num % j == 0) {
                    printf("%d, ", j);
                }
            }
            printf("\n");
            break;
        }
    }


    if (prime) {
        printf("%d is a prime number.\n", num);
    }

    return 0;
}
