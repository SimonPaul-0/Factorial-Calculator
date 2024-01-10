#include <stdio.h>

long long calculateFactorial(int num) {
    if (num < 0) {
        printf("Factorial is not defined for negative numbers\n");
        return -1; // indicating an error
    }

    long long factorialResult = 1;
    for (int i = 1; i <= num; ++i) {
        factorialResult *= i;
    }

    return factorialResult;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    long long result = calculateFactorial(num);

    if (result != -1) {
        printf("Factorial of %d is %lld\n", num, result);
    }

    return 0;
}
