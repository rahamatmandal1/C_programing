/* Name : Mandal Rahamatulla Faruk
UIN : 251M008
Class : F.E Mechanical 
DIV : F */
#include <stdio.h>

int main() {
    int start, end, i, sum = 0;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++) {
        if(i % 2 != 0) { 
            sum = sum + i;
        }
    }

    printf("Sum of all odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}
