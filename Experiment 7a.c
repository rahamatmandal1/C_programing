/*Name: Mandal Rahamatulla Faruk
UIN: 251M008
class: F.E Mechanical
DIV: F */

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    for (i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element in the array is: %d\n", largest);
    return 0;
}
