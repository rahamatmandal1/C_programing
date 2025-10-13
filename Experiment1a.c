/* Name : Mandal Rahamatulla Faruk
UIN : 251M008
Class : F.E Mechanical 
DIV : F */
#include <stdio.h>

int main() {
    float physics, chemistry, maths, average;

    printf("Enter Physics marks: ");
    scanf("%f", &physics);

    printf("Enter Chemistry marks: ");
    scanf("%f", &chemistry);

    printf("Enter Maths marks: ");
    scanf("%f", &maths);

    average = (physics + chemistry + maths) / 3
        
    printf("\nAverage Marks in PCM = %.2f\n", average);

    (average >= 50) 
        ? printf("Status: Eligible for Admission\n") 
        : printf("Status: Not Eligible for Admission\n");

    return 0;
}
