/* Name : Mandal Rahamatulla Faruk
UIN : 251M008
Class : F.E Mechanical 
DIV : F */
#include <stdio.h>

int main() {
    float physics, chemistry, maths, average;

    // Input PCM marks
    printf("Enter Physics marks: ");
    scanf("%f", &physics);

    printf("Enter Chemistry marks: ");
    scanf("%f", &chemistry);

    printf("Enter Maths marks: ");
    scanf("%f", &maths);

    // Calculate average
    average = (physics + chemistry + maths) / 3;

    // Display average
    printf("\nAverage Marks in PCM = %.2f\n", average);

    // Check eligibility using conditional operator
    (average >= 50) 
        ? printf("Status: Eligible for Admission\n") 
        : printf("Status: Not Eligible for Admission\n");

    return 0;
}
