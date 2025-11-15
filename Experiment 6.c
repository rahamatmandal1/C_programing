/*Name: Mandal Rahamatulla Mandal 
UIN: 251M008
class: F.E Mechanical 
DIV: F */
#include <stdio.h>

void counter() {
    static int count = 0;   // static variable (retains value between calls)
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    counter();
    counter();
    counter();
    counter();

    return 0;
}
