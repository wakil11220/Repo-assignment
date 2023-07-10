//Name : Wakil Ahmed
//Sr no:53
//Father Name: Abdul Raziq
//Instructer : Sir IMRAN
#include <stdio.h>

int Isprime(int n) {
    if (n < 2 || n > 100) {
        return 0 ;  // Numbers less than 2 or greater than 100 are not prime
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;  // Number is divisible by a factor other than 1 or itself
        }
    }
    return 1;  // Number is prime
}

int main() {
    int num,x;
    do {

        printf("Enter a number between 2 and 100: ");
        scanf("%d", &num);

        if (Isprime(num))
        {
            printf("%d is a prime number!\n", num);
            break;
        }

        else if( (num < 2)|| (num > 100))
        {
            printf(" %d out of range",num);
            printf("\npress 1 to retry and 0 for exit");
            scanf("%d",&x);
        }
        else
        {
            printf("%d is not a prime number.\n", num);
            break;
        }
    } while(x!=0);

    return 0;
}