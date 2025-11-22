/*Name: Mandal Rahamatulla Faruk
UIN: 251M008
Class: F.E Mechanical
DIV: F */
#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee emp[10];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Taking input
    for (i = 0; i < n; i++) {
        printf("\nEnter Employee %d Details:\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Displaying data (As if reading from file)
    printf("\n\n--- Employee Database ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n",
               emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}

