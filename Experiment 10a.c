/*Name: Mandal Rahamatulla Faruk
UIN: 251M008
Class: F.E Mechanical
DIV: F */
#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2;
    
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);
    
    p1 = &a;
    p2 = &b;
    
    int sum = *p1 + *p2;

    printf("Sum = %d\n", sum);

    return 0;
}
