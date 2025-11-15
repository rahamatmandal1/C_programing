/*Name: Mandal Rahamatulla Mandal 
UIN: 251M008
class: F.E Mechanical 
DIV: F */
#include <stdio.h>

long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}

long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial (Recursive): %lld\n", factorialRecursive(num));
        printf("Factorial (Iterative): %lld\n", factorialIterative(num));
    }

    return 0;
}
