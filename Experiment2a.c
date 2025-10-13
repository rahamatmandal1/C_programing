/* Name : Mandal Rahamatulla Faruk
UIN : 251M008
Class : F.E Mechanical 
DIV : F */
#include <stdio.h>

int main() {
    int num;
    
    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check even or odd
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
    
    return 0;
}
