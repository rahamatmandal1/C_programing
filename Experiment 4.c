/*Name: Mandal Rahamatulla Faruk
UIN: 251M008
class: F.E Mechanical 
DIV: F */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int n) {
    if (n <= 1) return 0;          
    if (n == 2) return 1;          
    if (n % 2 == 0) return 0;      

    int limit = (int)sqrt((double)n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int a, b;
    printf("Enter two integers (lower upper): ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    // handle if user gives range in reverse order
    if (a > b) {
        int t = a; a = b; b = t;
    }

    printf("Prime numbers between %d and %d are:\n", a, b);
    int found = 0;
    for (int num = (a < 2 ? 2 : a); num <= b; ++num) {
        if (isPrime(num)) {
            printf("%d ", num);
            found = 1;
        }
    }
    if (!found) printf("None");
    printf("\n");
    return 0;
}
