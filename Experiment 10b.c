/*Name: Mandal Rahamatulla Faruk
UIN: 251M008
Class: F.E Mechanical
DIV: F */
#include <stdio.h>

int main() {
    int arr[5];
    int *ptr;

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = &arr[4];

    printf("Array in reverse order:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr--; 
    }

    return 0;
}
