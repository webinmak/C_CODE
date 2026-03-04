#include <stdio.h>
#include <string.h>

// Union for mutually exclusive employment type
union EmploymentType {
    int pfNumber;         // For permanent employees
    int contractDuration; // For contract employees (in months)
};

// Structure for employee
struct Employee {
    int id;
    char name[50];
    float basic;
    float hra;
    float da;
    char empType;         // 'P' for permanent, 'C' for contract
    union EmploymentType type;
};

int main() {
    int n,i;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    // Input employee details
    for(i = 0; i < n; i++) {
        printf("\n--- Employee %d ---\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf(" %[^\n]", emp[i].name);  // Read string with spaces

        printf("Enter Basic Salary: ");
        scanf("%f", &emp[i].basic);

        printf("Enter HRA: ");
        scanf("%f", &emp[i].hra);

        printf("Enter DA: ");
        scanf("%f", &emp[i].da);

        printf("Enter Employment Type (P for Permanent, C for Contract): ");
        scanf(" %c", &emp[i].empType);

        // Input union data based on employee type
        if(emp[i].empType == 'P' || emp[i].empType == 'p') {
            printf("Enter PF Number: ");
            scanf("%d", &emp[i].type.pfNumber);
        } else if(emp[i].empType == 'C' || emp[i].empType == 'c') {
            printf("Enter Contract Duration (months): ");
            scanf("%d", &emp[i].type.contractDuration);
        } else {
            printf("Invalid Employment Type! Defaulting to Contract.\n");
            emp[i].empType = 'C';
            emp[i].type.contractDuration = 12;
        }
    }

    // Display employee details
    printf("\n===== Employee Details =====\n");
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Basic: %.2f, HRA: %.2f, DA: %.2f\n", emp[i].basic, emp[i].hra, emp[i].da);

        if(emp[i].empType == 'P' || emp[i].empType == 'p') {
            printf("PF Number: %d\n", emp[i].type.pfNumber);
        } else {
            printf("Contract Duration: %d months\n", emp[i].type.contractDuration);
        }
    }

    // Print size of Employee structure
    printf("\nSize of Employee structure with union: %zu bytes\n", sizeof(struct Employee));

    return 0;
}
