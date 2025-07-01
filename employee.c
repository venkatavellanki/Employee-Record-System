#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char designation[30];
    float salary;
};

void addEmployee() {
    FILE *fp;
    struct Employee emp;

    fp = fopen("employee.txt", "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);

    printf("Enter Designation: ");
    scanf(" %[^\n]", emp.designation);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    printf("Employee added successfully.\n");
}

void displayEmployees() {
    FILE *fp;
    struct Employee emp;

    fp = fopen("employee.txt", "r");

    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\n--- Employee List ---\n");

    while (fread(&emp, sizeof(emp), 1, fp)) {
        printf("\nID: %d\n", emp.id);
        printf("Name: %s\n", emp.name);
        printf("Designation: %s\n", emp.designation);
        printf("Salary: %.2f\n", emp.salary);
    }

    fclose(fp);
}

int main() {
    int choice;

    do {
        printf("\n=== Employee Record System ===\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
