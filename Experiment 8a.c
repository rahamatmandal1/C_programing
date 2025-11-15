/*Name: Mandal Rahamatulla Mandal 
UIN: 251M008
class: F.E Mechanical 
DIV: F */
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   

    while (str[length] != '\0') {
        length++;
    }
    
    length = length - 1;

    printf("Length of the string = %d\n", length);

    return 0;
}
