#include <stdio.h>

int main() {
    char name[50];
    char rollNo[20];
    int age;
    float height;
    float gpa;
    char section;

    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Roll Number: ");
    fgets(rollNo, sizeof(rollNo), stdin);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Height: ");
    scanf("%f", &height);

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    printf("Enter Section: ");
    scanf(" %c", &section);

    printf("\n--- Student Information ---\n");
    printf("Name: %s", name);
    printf("Roll Number: %s", rollNo);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("GPA: %.2f\n", gpa);
    printf("Section: %c\n", section);

    return 0;
}
